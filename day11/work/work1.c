#include <stdio.h>
#include <stdbool.h>

bool isback(const char *str);
int main(){
	char str[1024]={};
	while(1){
		if(isback(fgets(str,1024,stdin))){
			printf("是回文字符串!\n");
		}else{
			printf("不是回文字符串!\n");
		}
	}
	return 0;
}
bool isback(const char *str){
	int len=0;
	for(len=0;str[len]!='\0';len++);
	int i=0;
	int j=len-2;
	while(i<j&&str[i++]==str[j--])
	if(i>=j){
		return true;
	}
	return false;
}
