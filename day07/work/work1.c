#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <getch.h>
#include <stdbool.h>
int q[4][4];
void init(void);
void show_view(int k);
void operator(int ch);
void change(int i,int j);
bool game_die(int k);
int main(){
	srand(time(NULL));
	int k=rand()%4+1;
	unsigned int start=time(NULL);
	init();
	system("clear");
	show_view(k);
	while(1){
		int ch=getch();
		operator(ch);
		system("clear");
		show_view(k);
		if(game_die(k)){
			printf("你真棒，游戏结束，你用了%lu秒！",time(NULL)-start);
			break;
		}
	}
	return 0;
}
bool game_die(int k){
	for(int i=1;i<=2;i++){
		for(int j=1;j<=2;j++){
			if(q[i][j]%4+1!=k)
				return false;
		}
	}
	return true;
}
void init(void){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i<=2&&i>=1&&j<=2&&j>=1){
				q[i][j]=rand()%4+1;
			}else{
				q[i][j]=0;
			}
		}
	}
}
void show_view(int k){
	printf("目标是全部都是%d\n",k);
	for(int i=1;i<=2;i++){
		for(int j=1;j<=2;j++){
			printf("%d ",q[i][j]%4+1);
		}
		printf("\n");
	}
}
void operator(int ch){
	switch(ch){
		case 49: change(1,1);break;
		case 50: change(1,2);break;
		case 51: change(2,1);break;
		case 52: change(2,2);break;
	}
}
void change(int i,int j){
	int temp[5][2]={
	{-1,0},
	{1,0},
	{0,0},
	{0,-1},
	{0,1}
	};
	for(int k=0;k<5;k++){
		q[i+temp[k][0]][j+temp[k][1]]++;
	}
}
