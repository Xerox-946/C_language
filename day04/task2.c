#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int arr[10]={};
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("排序前:\n");
	for(int i=0;i<len;i++){
		arr[i]=rand()%30;
		printf("%d ",arr[i]);
	}	
	printf("\n排序后:\n");
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]<arr[j]){
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
		}
	}
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
