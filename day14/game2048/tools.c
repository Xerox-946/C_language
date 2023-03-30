#include <stdlib.h>
#include "game2048.h"
#include "tools.h"
void rand_two(){
	debug("%s\n",__func__);
	while(1){
		int x=rand()%4;
		int y=rand()%4;
		if(arrp[x][y]==0){
			arrp[x][y]=2;
			break;	
		}
	}
	count++;
}

void show_view(void){
	debug("%s\n",__func__);
	system("clear");
	for(int i=0;i<4;i++){
		printf("---------------------\n");
		for(int j=0;j<4;j++){
			if(arrp[i][j]==0){
				printf("|    ");
			}else{
				printf("|%4d",arrp[i][j]);
			}	
		}
		printf("|\n");
	}
	printf("---------------------\n");
	printf("score:%d\n",score);
}

bool is_end(void){
	debug("%s\n",__func__);
	if(count==16){
		for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
				if(arrp[i][j]==arrp[i][j+1]){
					return false;
				}
			}
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
				if(arrp[j][i]==arrp[j+1][i]){
					return false;
				}
			}
		}
		return true;
	}
	return false;
}
