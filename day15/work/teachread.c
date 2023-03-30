#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Teacher{
	char tname[20];
	unsigned char sex;
	long tid;
	char tpwd[15];
}Teacher;

int main(){
	Teacher *tch=malloc(sizeof(Teacher));
	FILE* fch=fopen("teacher.bin","r");
	if(NULL==fch){
		perror("fopen");
		return -1;
	}
	int ret=0,i=0;
	do{
		i=fread(tch+ret,sizeof(Teacher),1,fch);
		ret+=i;
		tch=realloc(tch,sizeof(Teacher)*(ret+1));
	}while(i);
	for(int i=0;i<ret;i++){
		printf("\n姓名:%s\n性别:%c\n工号:%ld\n密码:%s\n",tch[i].tname,tch[i].sex,tch[i].tid,tch[i].tpwd);
	}
	return 0;
}
