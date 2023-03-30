#include <stdio.h>
#include <string.h>
//设计
struct Student{
	char name[20];
	char sex;
	int id;
	double score;
};

int main(){
	//定义
	//struct Student stu={"xixi",'w',888,750};
	struct Student stu={.id=888};
	/*
	strcpy(stu.name,"hehe");
	stu.sex='m';
	stu.id=10086;
	stu.score=99;
	*/
	printf("%s %c %d %lf",stu.name,stu.sex,stu.id,stu.score);
}
