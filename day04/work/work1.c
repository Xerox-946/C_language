#include <stdio.h>

int main(){
	int n;
	while(1){
		printf("请输入杨辉三角的行数:");
		scanf("%d",&n);
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int k=1;k<n-i;k++){
				printf("  ");
			}
			for(int j=0;j<n;j++){
				if(j==0){
					arr[i][j]=1;
				}else if(i>0){
					arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
				}
				if(!arr[i][j]){
					printf("\n");
					break;
				}else{
					printf("%3d ",arr[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
