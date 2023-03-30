#include <stdio.h>

typedef union Test{
	char ch;
	int num1;
}Test;

int main(){
	Test t;
	t.num1=0x0A0B0C0D;
	if(t.ch==0x0D){
		printf("是小端!\n");
	}else if(t.ch==0x0A){
		printf("是大端!\n");
	}
	return 0;
}
