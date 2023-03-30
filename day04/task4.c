#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int arr[5][5]={};
	int maxx=0;
	int maxy=0;
	int row=sizeof(arr)/sizeof(arr[0]);
	int col=sizeof(arr)/sizeof(arr[0][0])/row;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr[i][j]=rand()%31;
			printf("%2d ",arr[i][j]);
			if(arr[i][j]>arr[maxx][maxy]){
				maxx=i;
				maxy=j;
			}
		}
		printf("\n");
	}
	printf("最大值坐标:x=%d y=%d\n",maxx+1,maxy+1);
	return 0;
}
