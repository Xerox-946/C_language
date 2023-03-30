#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("请输入一个整数:");
		scanf("%d",&num);
		int arr[32]={};
		int i=0;
		if(num>=0){
			while(num){
				arr[i]=num%2;
				num/=2;
				i++;
			}
		}else{
			int temp=~num;
			while(temp){
				arr[i]=temp%2+1;
				temp/=2;
				i++;
			}
			arr[i]=1;
		}
		for(int j=i;j>=0;j--){
			printf("%d",arr[j]%2);
		}
		printf("\n");
	}
	return 0;
}
