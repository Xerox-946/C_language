#include <stdio.h>

void hanio(int n,char a,char b,char c);
void move(int n,int i,int j);
int main(){
	int n;
	while(1){
		printf("请输入层数:");
		scanf("%d",&n);
		hanio(n,'A','B','C');
	}
	return 0;
}
void move(int n,int i,int j){
	printf("%d %c->%c\n",n,i,j);
}
void hanio(int n,char a,char b,char c){
	if(n==1){
		move(n,a,c);
		return;
	}
	hanio(n-1,a,c,b);
	move(n,a,c);
	hanio(n-1,b,a,c);
}
