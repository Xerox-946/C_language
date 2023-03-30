#include <getch.h>
#include <stdio.h>

int main(){
	while(1){
		printf("请输入方向键:");
		int ch=getch();
		if(ch==183){
			printf("上\n");
		}else if(ch==184){
			printf("下\n");
		}else if(ch==186){
			printf("左\n");
		}else if(ch==185){
			printf("右\n");
		}
	}
	return 0;
}
