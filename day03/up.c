#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("请输入一个整数:");
		scanf("%d",&num);
		if(num<0){
			printf("- ");
			num*=-1;
		}
		int temp=num;
		int power=1;
		while(temp){
			power*=10;
			temp/=10;
		}
		power/=10;
		while(power){
			printf("%d ",num/power%10);
			power/=10;
		}
		printf("\n");
	}
	return 0;
}
