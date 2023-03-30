#include <stdio.h>

int main(){
	int num=10;
	//定义
	int* p=NULL;
	//赋值
	p=&num;

	//解引用
	*p=20;
	printf("%d\n",num);
	return 0;
}
