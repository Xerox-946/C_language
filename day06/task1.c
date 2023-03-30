#include <stdio.h>

int main(){
	unsigned int m,n;
	char arr[32]={};
	while(1){
		printf("请输入一个整数以及要转换的进制:");
		scanf("%d%d",&m,&n);
		if(n<2){
			printf("进制不能低于二！\n");
			continue;
		}
		int i=0;
		while(m){
			arr[i++]=m%n;
			m/=n;
		}
		for(int j=i-1;j>=0;j--){
			if(arr[j]>9){
				printf("%c",arr[j]+55);
			}else{
				printf("%hhd",arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
