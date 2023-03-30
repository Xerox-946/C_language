#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool issu(int num);

int main(){
	for(int i=100;i<=1000;i++){
		if(issu(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

bool issu(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(0==num%i){
			return false;
		}
	}
	return true;
}
