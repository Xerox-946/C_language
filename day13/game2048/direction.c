#include <stdbool.h>
#include "game2048.h"
#include "direction.h"

void up(void){
	for(int j=0;j<4;j++){
		int conflict=1;
		for(int k=0;k<4-conflict;k++){
			for(int i=conflict;i<4;i++){
				if(arrp[i][j]==arrp[i-1][j] && arrp[i][j]!=0){
					score+=arrp[i-1][j];
					arrp[i-1][j]*=2;
					arrp[i][j]=0;
					conflict++;
					count--;
					is_move=true;
				}else if(arrp[i][j]!=0&&arrp[i-1][j]==0){
					arrp[i-1][j]=arrp[i][j];
					arrp[i][j]=0;
					is_move=true;
				}
			}
		}
	}
}
void down(void){
	for(int j=0;j<4;j++){
		int conflict=1;
		for(int k=0;k<4-conflict;k++){
			for(int i=3-conflict;i>=0;i--){
				if(arrp[i][j]==arrp[i+1][j] && arrp[i][j]!=0){
					score+=arrp[i+1][j];
					arrp[i+1][j]*=2;
					arrp[i][j]=0;
					conflict++;
					count--;
					is_move=true;
				}else if(arrp[i][j]!=0&&arrp[i+1][j]==0){
					arrp[i+1][j]=arrp[i][j];
					arrp[i][j]=0;
					is_move=true;
				}
			}
		}
	}
}
void left(void){
	for(int i=0;i<4;i++){
		int conflict=1;
		for(int k=0;k<4-conflict;k++){
			for(int j=conflict;j<4;j++){
				if(arrp[i][j]==arrp[i][j-1] && arrp[i][j]!=0){
					score+=arrp[i][j-1];
					arrp[i][j-1]*=2;
					arrp[i][j]=0;
					conflict++;
					count--;
					is_move=true;
				}else if(arrp[i][j]!=0&&arrp[i][j-1]==0){
					arrp[i][j-1]=arrp[i][j];
					arrp[i][j]=0;
					is_move=true;
				}
			}
		}
	}
}
void right(void){
	for(int i=0;i<4;i++){
		int conflict=1;
		for(int k=0;k<4-conflict;k++){
			for(int j=3-conflict;j>=0;j--){
				if(arrp[i][j]==arrp[i][j+1] && arrp[i][j]!=0){
					score+=arrp[i][j+1];
					arrp[i][j+1]*=2;
					arrp[i][j]=0;
					conflict++;
					count--;
					is_move=true;
				}else if(arrp[i][j]!=0&&arrp[i][j+1]==0){
					arrp[i][j+1]=arrp[i][j];
					arrp[i][j]=0;
					is_move=true;
				}
			}
		}
	}
}
