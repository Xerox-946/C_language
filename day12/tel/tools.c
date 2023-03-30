#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
