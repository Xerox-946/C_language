#include <stdio.h>
#include <stdlib.h>

typedef struct Teacher{
	char str[20];
	char sex;
	int id;
}Teacher;

int main(){
	int n=0;
	printf("请输入要输入的信息数:");
	scanf("%d",&n);
	Teacher* tch=malloc(sizeof(Teacher)*n);
	FILE* fch=fopen("text.txt","w");
	int ret=0;
	if(NULL==fch){
		perror("fopen");
		return 1;
	}
	for(int i=0;i<n;i++){
		printf("请输入教师姓名、性别、工号:");
		scanf("%s %c %d",tch[i].str,&tch[i].sex,&tch[i].id);
		ret+=fprintf(fch,"姓名:%s 性别:%c 工号:%d\n",tch[i].str,tch[i].sex,
		tch[i].id);
	}
	printf("成功写入%d\n",ret);
	return 0;
}
