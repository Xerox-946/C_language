#include <stdio.h>
#include <stdbool.h>

bool isback(int num);
int main(){
	for(unsigned int i=100000000;i<=1000000000;i++){
		if(isback(i)){
			printf("%u ",i);
		}
	}
	return 0;
}
bool isback(int num){
	int temp=num;
	int res=0;
	while(temp){
		res*=10;
		res+=temp%10;
		temp/=10;
	}
	if(res==num) return true;
	return false;
}
