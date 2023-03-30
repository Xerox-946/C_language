#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("请输入一个正整数:");
		scanf("%d",&num);
		int mul=1;
n:		mul*=num;
		if(num-->1){
			goto n;
		}
		printf("%d\n",mul);
	}
	return 0;
}
