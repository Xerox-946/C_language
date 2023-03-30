#include <stdio.h>
#include <string.h>
#include <getch.h>
#include <stdlib.h>
#include <unistd.h>
#include "tools.h"
#include "mail.h"

#define MAX_COUNT 50

typedef struct Connection{
	char names[20];
	char sexs;
	char tels[12];
	int delete;
}Connection;

static Connection con[MAX_COUNT]={};

static int count=0;

void del(void){
	system("clear");
	char str[20]={};
	while(1){
		printf("请输入姓名进行删除:");
		fgets(str,20,stdin);
		deleten(str);
		int change=0;
		for(int i=0;i<MAX_COUNT;i++){
			if(!strcmp(str,con[i].names)){
				con[i].delete=0;
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
			if(count==MAX_COUNT){
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
			for(;i<MAX_COUNT;i++){
				if(!strcmp(con[i].names,name)&&con[i].delete==1){
					printf("名字已有，请重新输入！\n");
					flag=0;
					break;
				}
				if(con[i].names==0||con[i].delete==0){
					con[i].delete=1;
					break;
				}
			}
		}else{
			printf("请输入你要修改的姓名:");
			fgets(qname,20,stdin);
			deleten(qname);
			for(i=0;i<MAX_COUNT;i++){
				if(!strcmp(qname,con[i].names)&&con[i].delete==1){
					break;
				}
			}
			if(i<MAX_COUNT){
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
			strcpy(con[i].names,name);
			con[i].sexs=sex;
			strcpy(con[i].tels,tel);
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
		int num[MAX_COUNT]={};
		for(int i=0;i<MAX_COUNT;i++){
			if((NULL!=strstr(con[i].names,name)||NULL!=strstr(con[i].tels,name))&&con[i].delete==1){
				num[number]=i;
				number++;
			}
		}
		if(number==0){
			printf("查无此人！\n");
		}else{
			for(int i=0;i<number;i++){
				printf("%d.姓名:%s\t性别:%s\t电话:%s\n",i+1,con[num[i]].names,'w'==con[num[i]].sexs?"女":"男",con[num[i]].tels);
			}
			break;
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
	for(int i=0;i<MAX_COUNT;i++){
		if(con[i].names!=0&&con[i].delete==1){
			exchange+=printf("%d.姓名:%s\t性别:%s\t电话:%s\n",i+1,con[i].names,'w'==con[i].sexs?"女":"男",con[i].tels);
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
