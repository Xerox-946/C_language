#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	while(1){
		int N;
		printf("请输入数组长度:");
		scanf("%d",&N);
		int arr1[N];
		int arr2[N+1];
		for(int i=0;i<N+1;i++){
			arr2[i]=0;
		}
		for(int i=0;i<N;i++){
			int temp=rand()%N;
			arr1[i]=temp;
			printf("%d ",temp);
			arr2[temp]++;
		}
		printf("\n");
		for(int i=1;i<=N+1;i++){
			if(arr2[i]==0){
				printf("未出现的最小正整数为:%d\n",i);
				break;
			}
		}
	}
	return 0;
}
