#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int arr[10]={};
	srand(time(NULL));
	double sum=0;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		arr[i]=rand()%30;
		sum+=arr[i];
		printf("%d ",arr[i]);
	}
	printf("\n");
	int max=arr[0],min=arr[0];
	for(int i=1;i<len;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("min=%d max=%d avg=%lf\n",min,max,sum/len);
}
