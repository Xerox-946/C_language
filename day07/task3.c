#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_exist(int q[],int k,int len,int res[]);
int main(){
	int k;
	int q[20]={};
	int res[20]={};
	int len=sizeof(q)/sizeof(q[0]);
	srand(time(NULL));
	while(1){
		printf("请输入一个数:");
		scanf("%d",&k);
		for(int i=0;i<len;i++){
			q[i]=rand()%31;
			printf("%d ",q[i]);
		}
		printf("\n");
		int cnt=find_exist(q,k,len,res);
		if(0==cnt){
			printf("该数在数组中不存在！\n");
		}else{
			for(int i=0;i<cnt;i++){
				printf("%d这个数字第%d次在%d号位置存在！\n",k,i+1,res[i]+1);
			}
		}
	}
}

int find_exist(int q[],int k,int len,int res[]){
	int cnt=0;
	for(int i=0;i<len;i++){
		if(q[i]==k){
			res[cnt]=i;
			cnt++;
		}
	}
	return cnt;
}
