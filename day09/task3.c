#include <stdio.h>

void swap(int **pp1,int **pp2);
int main(){
	int num1=10,num2=20;
	int *p1=&num1,*p2=&num2;
	printf("交换前：");
	printf("*p1=%d *p2=%d\n",*p1,*p2);
	printf("num1=%d num2=%d\n",num1,num2);
	swap(&p1,&p2);
	printf("交换后：");
	printf("*p1=%d *p2=%d\n",*p1,*p2);
	printf("num1=%d num2=%d\n",num1,num2);
}	
void swap(int **pp1,int **pp2){
	int temp=(int)*pp1;
	*pp1=*pp2;
	*pp2=(int*)temp;
}
