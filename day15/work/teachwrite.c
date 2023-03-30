#include <stdio.h>
#include <stdlib.h>

typedef struct Teacher{
	char tname[20];
	unsigned char sex;
	char tid[9];
	char tpwd[15];
}Teacher;

int main(){
	int n=0;
	printf("请输入要输入的信息数:");
	scanf("%d",&n);
	Teacher* tch=malloc(sizeof(Teacher)*n);
	for(int i=0;i<n;i++){
		printf("请输入教师姓名、性别、工号 密码:");
		scanf("%s %c %s %s",tch[i].tname,&tch[i].sex,tch[i].tid,tch[i].tpwd);
	}
	FILE* fch=fopen("teacher.bin","w");
	if(NULL==fch){
		perror("fopen");
		return 1;
	}
	int ret=fwrite(tch,sizeof(Teacher),n,fch);
	printf("成功写入%d\n",ret);
	return 0;
}
