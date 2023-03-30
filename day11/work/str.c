#include <stdio.h>
#include <string.h>

size_t strlen_xhn(const char *s);
char *strcpy_xhn(char *dest,const char*src);
char *strcat_xhn(char *dest,const char *src);
int strcmp_xhn(const char *s1,const char *s2);
int main(){
	char str[1024]={};
	scanf("%s",str);
	printf("strlen=%d strlen_xhn=%d\n",strlen(str),strlen_xhn(str));
	printf("%s\n",strcpy(str,"dalsdjaiosjdoawejdoiwajdoiawjd"));
	printf("%s\n",strcpy_xhn(str,"xdalsdjaiosjdoawejdoiwajdoiawjd"));
	printf("%s\n",strcat(str,"_dalsdjaiosjdoawejdoiwajdoiawjd"));
	printf("%s\n",strcat_xhn(str,"_xdalsdjaiosjdoawejdoiwajdoiawjd"));
	printf("%d\n",strcmp(strcat(str,"_dd"),strcat(str,"_dawjd")));
	//printf("%d\n",strcmp_xhn("dgqergqrgewrgfge","dagreg"));
	printf("%d\n",strcmp_xhn(strcat(str,"d"),strcat(str,"adalsdd")));
	return 0;
}
size_t strlen_xhn(const char *s){
	int len=0;
	while('\0'!=s[len]) len++;
	return len;
}
char *strcpy_xhn(char *dest,const char*src){
	int len=0;
	do{
		dest[len]=src[len];
		len++;
	}while(src[len-1]!='\0');
	return dest;	
}
char *strcat_xhn(char *dest,const char *src){
	int len=0;
	int leni=0;
	while(dest[len]!='\0'){
		len++;
	}
	while(src[leni]!='\0'){
		dest[len+leni]=src[leni];
		leni++;
	}
	return dest;
}
int strcmp_xhn(const char *s1,const char *s2){
	int len=0;
	while(s1[len]==s2[len]&&s1[len]!='\0'&&s2[len]!='\0'){
		len++;
	}
	if(s1[len]<s2[len]){
		return -1;
	}else if(s1[len]>s2[len]){
		return 1;
	}
	return 0;	
}
