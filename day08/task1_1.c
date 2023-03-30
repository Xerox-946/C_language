#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <getch.h>

int q[16][16];
void init(void);
void toward(void);
void show_view(void);
bool operator(void);
bool game_die(void);
int lz=1;
int x=2;
int y=2;
int main(){
	init();
	system("clear");
	show_view();
	unsigned time_start=time(NULL);
	while(1){
		if(lz==1){
			printf("请黑方落子@");
		}else if(lz==2){
			printf("请白方落子$");
		}
		toward();
		if(!operator()){
			continue;
		}else{
			q[x][y]=lz;
			lz=lz%2+1;
		}
		system("clear");
		show_view();
		if(game_die()){
			if(lz==2){
				printf("游戏结束！黑方获胜@！对局用时%lu秒！\n",time(NULL)-time_start);
			}else if(lz==1){
				printf("游戏结束！白方获胜$！对局用时%lu秒！\n",time(NULL)-time_start);
			}
			break;
		}
	}
	return 0;
}
void init(void){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			if(i==0){
				q[i][j]=j;
			}else if(j==0){
				q[i][j]=i;
			}else{
				q[i][j]=0;
			}
		}
	}
	return;
}
void show_view(void){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++){
			if(i==0||j==0){
				printf("%2d ",q[i][j]);
			}else{
				if(q[i][j]==0){
					printf(" * ");
				}else if(q[i][j]==1){
					printf(" @ ");
				}else if(q[i][j]==2){
					printf(" $ ");
				}
			}
		}
		printf("\n");
	}
	return;
}
bool operator(void){
	if(x<1||x>15||y<1||y>15){
		printf("输入非法位置,请重新输入!\n");
		return false;
	}
	if(q[x][y]!=0){
		printf("该位置已经有棋子，请重新输入！\n");
		return false;
	}
	return true;
}
bool game_die(void){
	int tempx;
	int tempy;
	int cnt;
	for(int m=-1;m<=1;m++){
		for(int n=-1;n<=1;n++){
			tempx=x;
			tempy=y;
			if((m!=0||n!=0)&&tempx+m>1&&tempx+m<=15&&tempy+n>1&&tempy+n<=15){
				cnt=0;
				while(q[tempx][tempy]==q[tempx+m][tempy+n]){
					tempx+=m;
					tempy+=n;
				}
				while(q[tempx][tempy]==q[tempx-m][tempy-n]){
					tempx-=m;
					tempy-=n;
					cnt++;
				}
				if(cnt==4){
					return true;
				}
			}
		}
	}
	return false;
}

void toward(void){
	int tempy=y*3;
	while(1){
		printf("\33[%d;%dH",x+1,tempy+2);
		switch(getch()){
			case 183:x>1&&x--;break;
			case 184:x<15&&x++;break;
			case 186:if(tempy>=5) tempy=tempy-3;break;
			case 185:if(tempy<45) tempy=tempy+3;break;
			case 10:y=tempy/3;return;
		}
	}
}
