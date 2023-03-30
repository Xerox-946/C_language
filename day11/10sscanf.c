#include <stdio.h>

int main(){
	char* str = "1999 10 27.11";
	int year=0,month=0;
	double d=0;

	sscanf(str,"%d %d %lf",&year,&month,&d);
	printf("%d %d %lf",year,month,d);
	return 0;
}
