#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("请输入一个整数:");
		scanf("%d",&num);
		int arr[32]={};
		for(int i=0;i<32;i++){
			arr[i]=(num>>i)&1;
		}
		for(int i=31;i>=0;i--){
			printf("%d",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
