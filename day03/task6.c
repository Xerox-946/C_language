#include <stdio.h>

int main(){
	int num;
n1: printf("请输入一个整数:");
	scanf("%d",&num);
	int f=0;
	int s=1;
n2:	if(num-->0){
		printf("%d ",s);
		s=s^f;
		f=s^f;
		s=s^f;
		s+=f;
		goto n2;
	}
	printf("\n");
	goto n1;
	return 0;
}
