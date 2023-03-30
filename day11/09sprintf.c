#include <stdio.h>

int main(){
	int num=10086;
	double d=3.14;

	char str[100]={};
	sprintf(str,"num=%d d=%lf",num,d);
	printf("%s",str);
	return 0;
}
