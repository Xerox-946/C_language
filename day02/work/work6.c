#include <stdio.h>
#include <stdbool.h>

bool issx(int a,int b,int c);
int main(){
	int num;
	while(1){
		printf("请输入一个三位数:");
		scanf("%d",&num);
		if(issx(num/100,num/10%10,num%10)){
			printf("是水仙花数\n");
		}else{
			printf("不是水仙花数\n");
		}
	}
	return 0;
}

bool issx(int a,int b,int c){
	if(a*a*a+b*b*b+c*c*c==a*100+b*10+c){
		return true;
	}
	return false;
}
