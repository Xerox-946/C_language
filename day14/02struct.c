#include <stdio.h>

typedef struct Data{
	char name[20];
	char sex;
	char age;
	double score;
	int id;
}Data;

int main(){
	Data d;
	printf("size=%d\n",sizeof(Data));
}
