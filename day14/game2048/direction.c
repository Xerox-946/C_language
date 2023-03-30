#include <stdbool.h>
#include "game2048.h"
#include "direction.h"
#include "tools.h"

void up(void){
	debug("%s\n",__func__);
	/*for(int j=0;j<4;j++){
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
	}*/
	for(int j=0;j<4;j++){
		int end=0;
		for(int x=1;x<4;x++){
			for(int i=x;i>end;i--){
				if(arrp[i][j]==arrp[i-1][j] && arrp[i][j]!=0){
					score+=arrp[i-1][j];
					arrp[i-1][j]*=2;
					arrp[i][j]=0;
					end=i;
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
	debug("%s\n",__func__);
	/*for(int j=0;j<4;j++){
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
	}*/
	for(int j=0;j<4;j++){
		int end=3;
		for(int x=2;x>=0;x--){
			for(int i=x;i<end;i++){
				if(arrp[i][j]==arrp[i+1][j] && arrp[i][j]!=0){
					score+=arrp[i+1][j];
					arrp[i+1][j]*=2;
					arrp[i][j]=0;
					end=i;
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
	debug("%s\n",__func__);
	/*for(int i=0;i<4;i++){
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
	}*/
	for(int i=0;i<4;i++){
		int end=0;
		for(int x=1;x<4;x++){
			for(int j=x;j>end;j--){
				if(arrp[i][j]==arrp[i][j-1] && arrp[i][j]!=0){
					score+=arrp[i][j-1];
					arrp[i][j-1]*=2;
					arrp[i][j]=0;
					end=j;
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
	debug("%s\n",__func__);
	/*for(int i=0;i<4;i++){
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
	}*/
	for(int i=0;i<4;i++){
		int end=3;
		for(int x=2;x>=0;x--){
			for(int j=x;j<end;j++){
				if(arrp[i][j]==arrp[i][j+1] && arrp[i][j]!=0){
					score+=arrp[i][j+1];
					arrp[i][j+1]*=2;
					arrp[i][j]=0;
					end=j;
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
