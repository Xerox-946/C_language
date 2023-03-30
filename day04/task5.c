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
	int sum=0;
	for(int i=maxx-1;i<=maxx+1;i++){
		for(int j=maxy-1;j<=maxy+1;j++){
			if(i>=0&&i<row&&j>=0&&j<col){
				sum+=arr[i][j];
			}
		}
	}
	printf("最大值坐标是%d %d，周围一圈之和为:%d\n",maxx+1,maxy+1,sum-arr[maxx][maxy]);
	return 0;
}
