#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int find_max(int q[],int len);
int main(){
	srand(time(NULL));
	int q[20]={};
	int len=sizeof(q)/sizeof(q[0]);
	for(int i=0;i<len;i++){
		q[i]=rand()%31;
		printf("%d ",q[i]);
	}
	printf("\n最大值:%d\n",find_max(q,len));
}

int find_max(int q[],int len){
	int max=q[0];
	for(int i=1;i<len;i++){
		if(max<q[i]){
			max=q[i];
		}
	}
	return max;
}
