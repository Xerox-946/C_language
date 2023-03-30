#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	//int m=rand()%6+1;
	//int n=rand()%6+1;
	int m,n;
	printf("请输入你要的数组行列:\n");
	scanf("%d%d",&m,&n);
	printf("请输入一个%d*%d的数组:\n",m,n);
	int arr[m][n];
	int row=sizeof(arr)/sizeof(arr[0]);
	int col=sizeof(arr)/sizeof(arr[0][0])/row;
	int sum=0;
	int cnt_0=0;
	int cnt_avg=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
			if(arr[i][j]!=0){
				cnt_0++;
			}
		}
	}
	double avg=sum/col/row;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]>avg){
				cnt_avg++;
			}
		}
	}
	printf("\n各元素之和为%d,非零元素个数为%d,平均值为%lf,大于平均值的个数为%d",sum,cnt_0,avg,cnt_avg);
	return 0;
}
