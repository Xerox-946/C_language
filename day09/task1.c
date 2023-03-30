#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *i,int *j);
void merge_sort(int q[],int l,int r);
void quick_sort(int q[],int l,int r);
int main(){
	int arr[20]={};
	srand(time(NULL));
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<20;i++){
		arr[i]=rand()%40;
		printf("%d ",arr[i]);
	}
	printf("\n");
	merge_sort(arr,0,len-1);
	//quick_sort(arr,0,len-1);
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
void swap(int *i,int *j){
	*i=*i^*j;
	*j=*i^*j;
	*i=*i^*j;
}
void quick_sort(int q[],int l,int r){
	if(l>=r) return;
	int x=q[l+r>>1];
	int i=l-1;
	int j=r+1;
	while(i<j){
		do i++;while(x>q[i]);
		do j--;while(x<q[j]);
		if(i<j){
			swap(&q[i],&q[j]);
		}
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}
void merge_sort(int q[],int l,int r){
	if(l>=r) return;
	int mid=l+r>>1;
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);
	int i=l;
	int j=mid+1;
	int temp[100010]={};
	int k=0;
	while(i<=mid&&j<=r){
		if(q[i]<=q[j]) temp[k++]=q[i++];
		else temp[k++]=q[j++];
	}
	while(i<=mid) temp[k++]=q[i++];
	while(j<=r) temp[k++]=q[j++];
	for(i=l,j=0;j<k;i++,j++){
		q[i]=temp[j];
	}
}
