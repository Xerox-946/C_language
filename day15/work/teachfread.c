#include <stdio.h>

typedef struct Teacher{
	char name[20];
	char sex;
	int id;
}Teacher;

int main(){
	Teacher tch[100010]={};
	FILE* fch=fopen("text.txt","r");
	if(NULL==fch){
		perror("fopen");
		return -1;
	}
	int ret=0;
	int i=0;
	while(1){
		ret=fscanf(fch,"姓名:%s 性别:%c 工号:%d\n",tch[i].name,&tch[i].sex,&tch[i].id);
		if(ret==-1) break;
		printf("%d.\n姓名:%s\n性别:%s\n工号:%d\n",i+1,tch[i].name,'w'==tch[i].sex?"女":"男",tch[i].id);
		i++;
	}
	return 0;
}
