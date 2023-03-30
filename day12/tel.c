#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <getch.h>

static char names[50][20]={};//名字数组
static char sexs[50]={};//性别数组
static char tels[50][12]={};//电话数组
static int delete[50]={};//逻辑删除标识符
static int count=0;
void init(void);//初始化界面
void del(void);//删除函数
void change(int ch);//改变函数根据ch的值判断是添加还是修改
void query(void);//查询函数可以进行模糊查询
void view(void);//查询全部
void exitsystem(void);//退出系统
void deleten(char* str);//删除末尾\n符号
int main(){
	while(1){
		init();
		int ch=getch();
		switch(ch){
			case 49:case 51:change(ch);break;
			case 50:del();break;
			case 52:query();break;
			case 53:view();break;
			case 54:exitsystem();break;
		}
	}
	return 0;
}
void init(void){
	system("clear");
	puts("通讯录项目:\n");
	puts("\t姓名、性别、电话，最多存储50个联系人\n");
	puts("\t功能:\n");
	puts("\t\t1.添加新联系人\n");
	puts("\t\t2.按名字删除联系人\n");
	puts("\t\t3.按名字修改联系人\n");
	puts("\t\t4.查询联系人，名字或电话，支持模糊查询\n");
	puts("\t\t5.显示所有联系人信息\n");
	puts("\t\t6.退出系统\n");
}
void del(void){
	system("clear");
	char str[20]={};
	while(1){
		printf("请输入姓名进行删除:");
		fgets(str,20,stdin);
		deleten(str);
		int change=0;
		for(int i=0;i<50;i++){
			if(!strcmp(str,*(names+i))){
				delete[i]=0;
				change++;
				break;
			}
		}
		if(change==0){
			printf("输入名字查询不到！请重新输\n");
		}else{
			count--;
			printf("操作成功!\n");
			break;
		}
	}
	printf("输入任意键返回主菜单!");
	if(getch()){
		init();
	}
}
void change(int ch){
	system("clear");
	char qname[20]={};
	while(1){
		char name[20]={};
		char tel[12]={};
		char sex=0;
		int i=0;
		int flag=1;
		if(ch==49){
			if(count==50){
				printf("系统正在升级，请稍后再试！\n");
				break;
			}
			printf("请输入新的姓名:");
			fgets(name,20,stdin);
			deleten(name);
			stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
			printf("请输入性别(男用m，女用w):");
			scanf("%c",&sex);
			stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
			printf("请输入电话:");
			fgets(tel,12,stdin);
			stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
			for(;i<50;i++){
				if(!strcmp(names[i],name)&&delete[i]==1){
					printf("名字已有，请重新输入！\n");
					flag=0;
					break;
				}
				if(*(names+i)==0||delete[i]==0){
					delete[i]=1;
					break;
				}
			}
		}else{
			printf("请输入你要修改的姓名:");
			fgets(qname,20,stdin);
			deleten(qname);
			for(i=0;i<50;i++){
				if(!strcmp(qname,names[i])&&delete[i]==1){
					break;
				}
			}
			if(i<50){
				printf("请输入新的姓名:");
				fgets(name,20,stdin);
				deleten(name);
				stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
				printf("请输入性别(男用m，女用w):");
				scanf("%c",&sex);
				stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
				printf("请输入电话:");
				fgets(tel,12,stdin);
				deleten(tel);
				stdin->_IO_read_ptr=stdin->_IO_read_end;//只限于Linux操作系统
				flag=1;
			}else{
				printf("查无此人！\n");
				flag=0;
			}
		}
		if(flag==1){
			if(ch==49){
				count++;
			}
			strcpy(names[i],name);
			sexs[i]=sex;
			strcpy(tels[i],tel);
			printf("操作成功!\n");
		}else{
			continue;
		}
		break;
	}
	printf("输入任意键返回主菜单!");
	if(getch()){
		init();
	}
}
void query(void){
	system("clear");
	while(1){
		char name[20]={};
		printf("请输入你要查找的信息:");
		fgets(name,20,stdin);
		deleten(name);
		int number=0;
		int num[50]={};
		for(int i=0;i<50;i++){
			if(NULL!=strstr(names[i],name)||NULL!=strstr(tels[i],name)&&delete[i]==1){
				num[number]=i;
				number++;
			}
		}
		if(number==0){
			printf("查无此人！\n");
		}else{
			for(int i=0;i<number;i++){
				printf("%d.姓名:%s\t性别:%s\t电话:%s\n",i+1,names[num[i]],'w'==sexs[num[i]]?"女":"男",tels[num[i]]);
			}
		}
	}
	printf("输入任意键返回主菜单!");
	if(getch()){
		init();
	}
}
void view(void){
	system("clear");
	int exchange=0;
	for(int i=0;i<50;i++){
		if(names[i]!=0&&delete[i]==1){
			exchange+=printf("%d.姓名:%s\t性别:%s\t电话:%s\n",i+1,names[i],'w'==sexs[i]?"女":"男",tels[i]);
		}
	}
	if(exchange==0){
		printf("暂无数据！\n");
	}
	printf("输入任意键返回主菜单!");
	if(getch()){
		system("clear");
		init();
	}
}
void exitsystem(void){
	exit(0);
}
void deleten(char* str){
	char* temp=str;
	while(*temp!='\n'){
		temp++;
	}
	*temp='\0';
}
