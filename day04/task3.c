#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int arr[10]={};
	for(int i=0;i<10;i++){
		arr[i]=rand()%31;
		printf("%d ",arr[i]);
	}
	printf("\n");
	int max=arr[0];
	int max_two=arr[1];
	for(int i=0;i<10;i++){
		if(max_two<arr[i]){
			max_two=arr[i]^max_two;
			arr[i]=arr[i]^max_two;
		if(max_two<arr[i]){
			max_two=arr[i]^max_two;
			arr[i]=arr[i]^max_two;
			max_two=arr[i]^max_two;
		}
			max_two=arr[i]^max_two;
		}
		if(max<max_two){
			max=max^max_two;
			max_two=max^max_two;
			max=max^max_two;
		}
	}
	printf("第二大的是%d\n",max_two);
	return 0;
}
