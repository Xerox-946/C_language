#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool issx(int num);
int main(){
	for(int i=100;i<1000;i++){
		if(issx(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}

bool issx(int num){
	int a=num/100;
	int b=num/10%10;
	int c=num%10;
	if(pow(a,3)+pow(b,3)+pow(c,3)==num){
		return true;
	}
	return false;
}
