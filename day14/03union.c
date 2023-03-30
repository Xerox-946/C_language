#include <stdio.h>

typedef union Data{
	char ch;
	int num;
}Data;

int main(){
	Data d={};
	d.num=123;
	printf("%hhd",d.ch);
}
