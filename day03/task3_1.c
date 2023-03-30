#include <stdio.h>

int main(){
	while(1){
		int num;
		int new_num=0;
		printf("请输入一个整数:");
		scanf("%d",&num);
		int temp=num;

		while(temp){
			new_num*=10;
			new_num+=temp%10;
			temp/=10;
		}
		if(new_num==num){
			printf("是回文数\n");
		}else{
			printf("不是回文数\n");
		}
	}
	return 0;
}
