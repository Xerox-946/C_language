#include <stdio.h>

int main(){
	unsigned int num;
	while(1){
		printf("请输入一个正整数:");
		scanf("%u",&num);
		int power=1;
		int temp=num;
		int cnt=0;
		while(temp){
			temp/=10;
			power*=10;
			cnt++;
		}
		power/=10;
		int h;
		int l;
		int cnt1=0;
		int n=1;
		do{
			h=num/power%10;
			l=num/n%10;
			power/=10;
			n*=10;
			cnt1++;
		}while(power!=0&&(l==h)&&(power>=n));
		if(((cnt+1)/2)==cnt1){
			printf("是回文数\n");
		}else{
			printf("不是回文数\n");
		}
	}
	return 0;
}
