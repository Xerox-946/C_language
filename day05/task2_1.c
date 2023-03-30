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
	int num[4][2]={
		{-1,0},
		{1,0},
		{0,1},
		{0,-1}
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
		for(int i=0;i<4;i++){
			if(ch==183+i){
				int x1=x+num[i][0];
				int y1=y+num[i][1];
				int x2=x1+num[i][0];
				int y2=y1+num[i][1];
				if(arr[x1][y1]==0||arr[x1][y1]==4){
					arr[x][y]-=2;
					arr[x1][y1]+=2;
					x+=num[i][0];
					y+=num[i][1];
					step++;
				}else if((arr[x1][y1]==3||arr[x1][y1]==7)&&(arr[x2][y2]==0||arr[x2][y2]==4)){
					arr[x2][y2]+=3;
					arr[x1][y1]-=1;
					arr[x][y]-=2;
					x+=num[i][0];
					y+=num[i][1];
					step++;
				}
			}
		}
	}
	return 0;
}
