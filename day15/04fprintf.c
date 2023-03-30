#include <stdio.h>

int main(){
	FILE* ffw=fopen("text.txt","w");
	if(NULL==ffw){
		perror("fopen");
		return 1;
	}
	int num=10086;
	double f=3.14;
	int ret=fprintf(ffw,"num=%d f=%lf",num,f);
	printf("%d\n",ret);
	return 0;
}
