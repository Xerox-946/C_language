#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("请输入一个月份：");
		scanf("%d",&num);
		switch(num){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:printf("31天\n");break;
			case 2:printf("28天\n");break;
			default:printf("30天\n");break;
		}
	}
	return 0;
}
