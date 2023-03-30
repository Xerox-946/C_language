#include <stdio.h>

int atoi_xhn(const char* src);
int main(){
	char str[1024]={};
	while(1){
		printf("请输入一个整数:");
		scanf("%s",str);
		printf("%d\n",atoi_xhn(str));
	}
	return 0;
}
int atoi_xhn(const char* src){
	int ret=0;
	while(*src&&*src>='0'&&*src<='9'){
		ret*=10;
		ret+=*src-48;
		src++;
	}
	return ret;
}
