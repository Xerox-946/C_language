#include <stdio.h>

int main(){
	int year;
	while(1){
		printf("请输入一个年份：");
		scanf("%d",&year);
		if(year%400==0||(year%4==0&&year%100!=0)){
			printf("是闰年\n");
		}else{
			printf("是平年\n");
		}
	}
	return 0;
}
