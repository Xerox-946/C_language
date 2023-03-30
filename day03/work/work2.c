#include <stdio.h>

int main(){
	for(int i=0;i<=20;i++){
		for(int j=0;j<=33;j++){
			int temp=100-5*i-3*j;
			if(temp>=0 && (i+j+3*temp==100)){
				printf("%d %d %d\n",i,j,temp*3);
			}
		}
	}
	return 0;
}
