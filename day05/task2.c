#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <getch.h>

int main(){
	int arr[8][8]={
		{0,0,1,1,1,1,0,0},
		{0,0,1,4,4,1,0,0},
		{0,1,1,0,4,1,1,0},
		{0,1,0,0,3,4,1,0},
		{1,1,0,3,0,0,1,1},
		{1,0,0,1,3,3,0,1},
		{1,0,0,2,0,0,0,1},
		{1,1,1,1,1,1,1,1},
	};
	int row=sizeof(arr)/sizeof(arr[0]);
	int col=sizeof(arr)/sizeof(arr[0][0])/row;
	int step=0;
	int x=6,y=3;
	long start_time=time(NULL);
	while(1){
		system("clear");
		int tempcnt=0;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(arr[i][j]==7){
					tempcnt++;
				}
			}
		}
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(!arr[i][j]){
					printf("  ");
				}else if(arr[i][j]==2||arr[i][j]==6){
					printf("@ ");
				}else if(arr[i][j]==3||arr[i][j]==7){
					printf("$ ");
				}else if(arr[i][j]==1){
					printf("# ");
				}else if(arr[i][j]==4){
					printf("O ");
				}
			}
			printf("\n");
		}
		if(tempcnt==4){
			printf("太强了,用了%d步,用时%ld秒!\n",step,time(NULL)-start_time);
			break;
		}else{
			printf("目前用了%d步\n",step);
		}
		int ch=getch();
		if(ch==183){
			if(arr[x-1][y]==0||arr[x-1][y]==4){
				arr[x][y]-=2;
				arr[x-1][y]+=2;
				x--;
				step++;
			}else if((arr[x-1][y]==3||arr[x-1][y]==7)&&(arr[x-2][y]==0||arr[x-2][y]==4)){
				arr[x-2][y]+=3;
				arr[x-1][y]-=1;
				arr[x][y]-=2;
				x--;
				step++;
			}
		}else if(ch==184){
			if(arr[x+1][y]==0||arr[x+1][y]==4){
				arr[x][y]-=2;
				arr[x+1][y]+=2;
				x++;
				step++;
			}else if((arr[x+1][y]==3||arr[x+1][y]==7)&&(arr[x+2][y]==0||arr[x+2][y]==4)){
				arr[x+2][y]+=3;
				arr[x+1][y]-=1;
				arr[x][y]-=2;
				x++;
				step++;
			}
		}else if(ch==186){
			if(arr[x][y-1]==0||arr[x][y-1]==4){
				arr[x][y]-=2;
				arr[x][y-1]+=2;
				y--;
				step++;
			}else if((arr[x][y-1]==3||arr[x][y-1]==7)&&(arr[x][y-2]==0||arr[x][y-2]==4)){
				arr[x][y-2]+=3;
				arr[x][y-1]-=1;
				arr[x][y]-=2;
				y--;
				step++;
			}
		}else if(ch==185){
			if(arr[x][y+1]==0||arr[x][y+1]==4){
				arr[x][y]-=2;
				arr[x][y+1]+=2;
				y++;
				step++;
			}else if((arr[x][y+1]==3||arr[x][y+1]==7)&&(arr[x][y+2]==0||arr[x][y+2]==4)){
				arr[x][y+2]+=3;
				arr[x][y+1]-=1;
				arr[x][y]-=2;
				y++;
				step++;
			}
		}
	}
	return 0;
}
