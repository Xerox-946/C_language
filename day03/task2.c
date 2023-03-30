#include <stdio.h>

int main(){
	unsigned int num;
	printf("请输入一个正整数:");
	scanf("%u",&num);
	if(num==1){
		printf("不是素数!\n");
		return 0;
	}
	for(int i=2;i<num/2+1;i++){
		if(num%i==0){
			printf("不是素数！\n");
			return 0;
		}
	}
	printf("是素数！\n");
	return 0;
}
