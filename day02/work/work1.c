#include <stdio.h>
int main(){
	unsigned int num;
	while(1){
		printf("请输入一个月份:");
		scanf("%d",&num);
		switch((num+2)/3){
			case 1:printf("春天\n");break;
			case 2:printf("夏天\n");break;
			case 3:printf("秋天\n");break;
			case 4:printf("冬天\n");break;
			default:printf("输入月份有误！\n");
		}
	}
	return 0;
}
