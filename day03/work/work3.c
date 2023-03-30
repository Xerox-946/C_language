#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isss(int num);
int main(){
	for(int i=100;i<1001;i++){
		if(isss(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

bool isss(int num){
	for(int i=2;i<sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
