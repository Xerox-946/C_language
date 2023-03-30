#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isrun(int year);
long to_one_day(int year,int month,int day);
int main(){
	int year1,year2,month1,month2,day1,day2;
	while(1){
		printf("请输入两个年月日:");
		scanf("%d-%d-%d%d-%d-%d",&year1,&month1,&day1,&year2,&month2,&day2);
		long date1=to_one_day(year1,month1,day1);
		long date2=to_one_day(year2,month2,day2);
		if(date1==0||date2==0){
			continue;
		}
		printf("相差%d天\n",abs(date1-date2));
	}
	return 0;
}

long to_one_day(int year,int month,int day){
	long sum=0;
	int moon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	moon[2]=28+(!(year%4)&&year%100||!(year%400));
	if(month<=0||month>12||day<=0||day>moon[month]){
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
	sum+=day;
	return sum;
}

bool isrun(int year){
	if(!(year%4) && year%100 || !(year%400)){
		return true;
	}
	return false;
}
