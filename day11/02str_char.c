#include <stdio.h>

void show_arr(int arr[]){
	for(int i=0;~0!=arr[i];i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,67,56,45,~0};
	show_arr(arr);
	return 0;
}
