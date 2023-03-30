#include <stdio.h>

int main(){
	FILE* frp=fopen("work/text.txt","r");
	if(NULL==frp){
		perror("fopen");
		return -1;
	}
	char buf[100010]={};
	int ret=fread(buf,1,100010,frp);
	printf("%d\n",ret);
	printf("%s\n",buf);
}
