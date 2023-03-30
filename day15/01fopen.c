#include <stdio.h>

int main(){
	FILE* frp=fopen("tools.c","w");
	if(frp==NULL){
	//	printf("文件打开失败!\n");
		perror("fopen");
	}else{
		printf("文件打开成功!\n");
	}
	return 0;
}
