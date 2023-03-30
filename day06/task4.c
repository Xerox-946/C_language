#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[6];
int q[7];
int compare(int lannum);

int main(){
	srand(time(NULL));
	while(1){
		printf("请输入一组数字:");
		for(int i=0;i<sizeof(q)/sizeof(q[0]);i++){
			scanf("%d",&q[i]);
		}
		for(int i=0;i<6;){
			int temp=rand()%33+1;
			int cnt=0;
			for(int j=0;j<i;j++){
				if(temp==arr[j]){
					cnt++;
				}
			}
			if(!cnt){
				arr[i]=temp;
				i++;
			}
		}
		printf("\n");
		for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
			printf("%d ",arr[i]);
		}
		int lannum=rand()%16+1;
		printf("%d \n",lannum);
		int ans=compare(lannum);
		printf("恭喜你中了%d等奖\n",ans);
	}
	return 0;
}

int compare(int lannum){
	int red=0;
	int blue=0;
	for(int i=0;i<sizeof(q)/sizeof(q[0])-1;i++){
		for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
			if(q[i]==arr[j]){
				red++;
			}
		}
	}
	if(q[6]==lannum){
		blue++;
	}
	int bluered=blue*10+red;
	switch(bluered){
		case 16:return 1;
		case 15:case 6:return 2;
		case 14:case 5:return 3;
		case 13:case 4:return 4;
		case 12:case 11:case 10:return 5;
		default:return 0;
	}
}
