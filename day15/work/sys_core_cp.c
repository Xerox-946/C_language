#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,const char* argv[]){
	if(argc!=3){
		printf("User：./CP dest src\n");
		return 0;
	}
	int fd=open(argv[1],O_RDONLY);
	int fw=open(argv[2],O_WRONLY, 0666);
	char ch;
	char str[256]={};
	if(fd<0){
		perror("open");
		return 0;
	}else if(fw<0){
		fw=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0666);
	}else if(fw>=0){
		printf("是否覆盖:y/n:");
		//char cmd=getchar();
		scanf("%c",&ch);
	}
	int rer=0;
	if(ch!='n'){
		do{
			rer=read(fd,str,255);
			write(fw,str,rer);
		}while(rer);
	}else{
		close(fd);
		close(fw);
		return 0;
	}
	close(fd);
	close(fw);
	return 0;
}
