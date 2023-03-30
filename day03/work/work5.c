#include <stdio.h>

int main(){
	for(int i=10;i>=0;i--){
		for(int j=0;j<=10+i;j++){
			if(j>i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
