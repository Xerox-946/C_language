#include <stdio.h>

int main(){
	char c=-1;
	unsigned char c1=1;
	short s=-2;
	unsigned short s1=2;
	int num=-3;
	unsigned num1=3;
	long l=-4;
	unsigned long l1=4;
	long long ll=-5;
	unsigned long long ll1=5;
	float f=6.0;
	double d=7.0;
	long double ld=8.0;
	scanf("%hhd%hd%d%ld%lld",&c,&s,&num,&l,&ll);
	printf("%hhd %hd %d %ld %lld\n",c,s,num,l,ll);
	scanf("%hhu%hu%u%lu%llu",&c1,&s1,&num1,&l1,&ll1);
	printf("%hhu %hu %u %lu %llu\n",c1,s1,num1,l1,ll1);
	printf("%f %lf %LF\n",f,d,ld);
	printf("%c %c\n",c,c1);
	return 0;
}
