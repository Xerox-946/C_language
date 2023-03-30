#include <stdio.h>
#include <stdbool.h>

bool isrun(int year);
int main(){
	int moon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	while(1){
		long sum=0;
		printf("请输入年月日:");
		scanf("%d-%d-%d",&year,&month,&day);
		moon[2]=28+(!(year%4)&&year%100||!(year%400));
		if(month<=0||month>12||day<=0&&day>moon[month]){
			printf("日期输入错误！\n");
			return 0;
		}
		for(int i=1;i<year;i++){
			if(isrun(i)){
				sum+=366;
			}else{
				sum+=365;
			}
		}
		for(int i=1;i<month;i++){
			sum+=moon[i];
		}
		printf("距离一年一月一日有%ld天！\n",sum+day-1);
	}
	return 0;
}

bool isrun(int year){
	if(!(year%4) && year%100 || !(year%400)){
		return true;
	}
	return false;
}
