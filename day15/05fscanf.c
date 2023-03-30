#include <stdio.h>

int main(){
	FILE* ffr=fopen("text.txt","r");
	if(NULL==ffr){
		perror("fopen");
		return -1;
	}
	int n1=0;
	double d=0;
	int ret=fscanf(ffr,"num=%d f=%lf",&n1,&d);
	printf("ret=%d\nnum=%d\nf=%lf\n",ret,n1,d);
	return 0;
}
