#include <stdio.h>

int sum();
int num[42]={};
int cnt=0;
int main(){
	int len=41;
	for(int i=1;i<=len;i++){
		num[i]=1;
	}
	while(sum()!=2){
		for(int i=1;i<42;i++){
			cnt+=num[i];
			if(cnt==3){
				cnt=0;
				num[i]=0;
			}
		}
	}
	for(int i=1;i<42;i++){
		if(num[i]==1){
			printf("%d ",i);
		}
	}
}

int sum(){
	int total=0;
	for(int i=1;i<42;i++){
		total+=num[i];
	}
	return total;
}
