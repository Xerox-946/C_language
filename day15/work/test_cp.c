#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char* argv[]){
	if(argc!=3){
		printf("User：./CP dest src\n");
		return 0;
	}
	FILE* file1=fopen(argv[1],"r");
	FILE* file2=fopen(argv[2],"r+");
	char ch;
	char str[256]={};
	if(NULL==file1){
		perror("fopen");
		return 0;
	}else if(NULL==file2){
		file2=fopen(argv[2],"w");
	}else if(NULL!=file2){
		printf("是否覆盖:y/n:");
		//char cmd=getchar();
		scanf("%c",&ch);
	}
	int rer=0;
	if(ch!='n'){
		do{
			rer=fread(str,1,256,file1);
			fwrite(str,1,rer,file2);
		}while(rer);
	}else{
		fclose(file1);
		fclose(file2);
		return 0;
	}
	fclose(file1);
	fclose(file2);
	return 0;
}
