#include <stdio.h>

int main(){
	FILE* fwp=fopen("text.txt","w");
	if(NULL==fwp){
		perror("fopen");
		return 1;
	}
	int num = 10;
	int ret=fwrite(&num,4,1,fwp);
	printf("ret=%d\n",ret);
	return 0;
}
