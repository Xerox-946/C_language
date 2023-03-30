#include <stdio.h>

#define SWAP(a,b) {a=a+b;b=a-b;a=a-b;}//数据溢出的风险，不适合结构体
#define SWAP1(a,b){a=a^b;b=a^b;a=a^b;}//无溢出但是只能交换整数
#define SWAP2(a,b,type){type t=a;a=b;b=t;}
#define SWAP3(a,b){typeof(a) t=(a);(a)=(b);(b)=t;}
int main(){
	int a=20;
	int b=20;
	printf("a=%d b=%d\n",a,b);
	SWAP1(a,b)
	printf("a=%d b=%d\n",a,b);
	return 0;
}
