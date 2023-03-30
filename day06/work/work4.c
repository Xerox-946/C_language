#include <stdio.h>

int main(){
	short arr[200]={1};
	int cnt=1;
	for(int i=1;i<=100;i++){
		int carry=0;
		for(int j=0;j<cnt;j++){
			int temp=arr[j]*i+carry;
			arr[j]=temp%10;
			carry=temp/10;
		}
		while(carry){
			arr[cnt++]=carry%10;
			carry/=10;
		}
	}
	for(int i=cnt-1;i>=0;i--){
		printf("%hd",arr[i]);
	}
}
