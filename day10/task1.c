#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool issu(int num);
int main(){
	int cnt=0;
	int *arrp=NULL;
	for(int i=100;i<=1000;i++){
		if(issu(i)){
			cnt++;
			arrp=realloc(arrp,cnt*sizeof(int));
			arrp[cnt-1]=i;
			printf("%d ",arrp[cnt-1]);
		}
	}
	free(arrp);
	arrp=NULL;
	return 0;
}

bool issu(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
