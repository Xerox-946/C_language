#include <getch.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	//定义地图二维数组
	char map[10][10]={
		{' ','#',' ','#','#','#','#','#','#','#'},
		{'#','@','#','#','#','#','#',' ',' ','#'},
		{'#',' ','#',' ',' ',' ','#',' ','#','#'},
		{' ',' ','#',' ','#',' ','#',' ','#',' '},
		{'#',' ','#',' ',' ',' ',' ',' ','#','#'},
		{'#',' ','#',' ','#','#',' ','#',' ',' '},
		{' ',' ','#',' ','#',' ',' ','#','#',' '},
		{'#',' ','#',' ',' ','#',' ','#','#','#'},
		{' ',' ',' ',' ','#','#',' ',' ',' ',' '},
		{'#','#','#','#','#','#','#','#','#','#'}
	};
	//定义记录角色位置的变量
	int x=1,y=1;
	long time1=time(NULL);
	int row=sizeof(map)/sizeof(map[0]);
	int col=sizeof(map)/sizeof(map[0][0])/row;
	while(1){
		system("clear");
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				printf("%c ",map[i][j]);
			}
			printf("\n");
		}
		if(x==8&&y==9){
			printf("游戏结束，用时%ld秒\n",time(NULL)-time1);
			break;
		}
		int ch=getch();
		if(ch==183){
			if(map[x-1][y]==' '){
				char temp=map[x][y];
				map[x][y]=map[x-1][y];
				map[x-1][y]=temp;					
				x--;
			}
		}else if(ch==184){
			if(map[x+1][y]==' '){
				char temp=map[x][y];
				map[x][y]=map[x+1][y];
				map[x+1][y]=temp;
				x++;	
			}
		}else if(ch==186){
			if(map[x][y-1]==' '){
				char temp=map[x][y];
				map[x][y]=map[x][y-1];					
				map[x][y-1]=temp;
				y--;	
			}
		}else if(ch==185){
			if(map[x][y+1]==' '){
				char temp=map[x][y];
				map[x][y]=map[x][y+1];						
				map[x][y+1]=temp;
				y++;	
			}
		}
	}
	return 0;
}
