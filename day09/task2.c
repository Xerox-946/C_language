#include <stdio.h>

int max_min_num(int num1,int num2,int *p);
int main(){
	int num1,num2;
	while(1){
		printf("请输入两个数:");
		scanf("%d%d",&num1,&num2);
		int *p=NULL;
		int min=0;
		p=&min;
		int max=max_min_num(num1,num2,p);
		printf("max=%d min=%d\n",max,min);
	}
}
int max_min_num(int num1,int num2,int *p){
	int max=0,min=0;
	for(int i=1;i<=num1&&i<=num2;i++){
		if(num1%i==0&&num2%i==0){
			max=i;
		}
	}
	if(num1>num2){
		min=num1;
	}else{
		min=num2;
	}
	while(min%num1!=0||min%num2!=0){
		min++;
	}
	*p=min;
	return max;
}
