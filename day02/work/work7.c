#include <stdio.h>

int main(){
	int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int arr2[13]={};
	int moon;
	for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
		arr2[i]=arr2[i-1]+arr[i];
	}
	while(1){
		printf("请输入一个月份:");
		scanf("%d",&moon);
		printf("%d月份在一年里是第%d天到第%d天！\n",moon,arr2[moon-1],arr2[moon]);
	}
	return 0;
}
