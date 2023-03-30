#include <stdio.h>

int main(){
	int n;
	while(1){
		printf("请输入一个要转换1010的数:");
		scanf("%d",&n);
		printf("%d\n",n&(-241)|160);
	}
	return 0;
}
