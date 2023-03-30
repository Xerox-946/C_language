#include <stdio.h>

int main(){
	int password;
	int i=3;
	int rightpsw=142857;
	do{
		printf("您还有%d次输入机会！\n",i);
		printf("请输入您的密码:");
		scanf("%d",&password);
		if(rightpsw==password){
			printf("恭喜你登录成功!");
			return 0;
		}else{
			i--;
		}
	}while(i);
	if(i==0){
		printf("您的卡已被锁，请到前台找工作人员帮忙。");
	}
	return 0;
}
