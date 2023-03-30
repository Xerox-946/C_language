#include <stdio.h>
#include <string.h>

char* conver(char* dest);
int main(){
	char str[1024]={};
	while(1){
		printf("请输入一个字符串:");
		scanf("%s",str);
		printf("反转前:%s\n",str);
		printf("反转后:%s\n",conver(str));
	}
}
char* conver(char* dest){
	int len=strlen(dest);
	char *temp1=dest;
	char *temp2=dest+len-1;
	while(temp1<=temp2){
		char temp=*temp1;
		*temp1=*temp2;
		*temp2=temp;
		temp1++,temp2--;
	}
	return dest;
}
