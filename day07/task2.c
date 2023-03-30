#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int q[],int i,int j);
void quick_sort(int q[],int l,int r);

int main(){
	srand(time(NULL));
	int n;
	while(1){
		printf("请输入个数:");
		scanf("%d",&n);
		int q[n];
		for(int i=0;i<n;i++){
			q[i]=rand()%(2*n);
			printf("%d ",q[i]);
		}
		printf("\n");
		quick_sort(q,0,n-1);
		for(int i=0;i<n;i++){
			printf("%d ",q[i]);
		}
		printf("\n");
	}
	return 0;
}
void swap(int q[],int i,int j){
	q[i]=q[i]^q[j];
	q[j]=q[i]^q[j];
	q[i]=q[i]^q[j];
}

void quick_sort(int q[],int l,int r){
	if(l>=r) return;
	int i=l-1;
	int j=r+1;
	int mid=q[l+r>>1];
	while(i<j){
		do i++;while(mid>q[i]);
		do j--;while(mid<q[j]);
		if(i<j){
			swap(q,i,j);
		}
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
	return;
}
