#include <stdio.h>

int q[100010];
void swap(int i,int j);
void quick_sort(int l,int r);

int main(){
	int n;
	printf("请输入个数:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&q[i]);
	}
	quick_sort(0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",q[i]);
	}
	return 0;
}
void swap(int i,int j){
	q[i]=q[i]^q[j];
	q[j]=q[i]^q[j];
	q[i]=q[i]^q[j];
}

void quick_sort(int l,int r){
	if(l>=r) return;
	int i=l-1;
	int j=r+1;
	int mid=q[l+r>>1];
	while(i<j){
		do i++;while(mid>q[i]);
		do j--;while(mid<q[j]);
		if(i<j){
			swap(i,j);
		}
	}
	quick_sort(l,j);
	quick_sort(j+1,r);
	return;
}
