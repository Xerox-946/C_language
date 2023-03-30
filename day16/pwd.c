#include <stdio.h>
#include <getch.h>

void pwdstr(char* str);
int main(){
	char pwd[100010]={};
	printf("请输入密码:");
	pwdstr(pwd);
	printf("\n%s",pwd);
	return 0;
}

void pwdstr(char* str){
	int i=0;
	while(1){
		char ch=getch();
		switch(ch){
			case 127:
			if(i!=0){
				printf("\b \b");
				i--;
				*(str+i)=0;
			}
			break;
			case 10:return;break;
			default:
				if(i<15){
					printf("*");
					*(str+i)=ch;
					i++;
				}
				break;
		}
	}
}
