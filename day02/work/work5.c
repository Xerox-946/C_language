#include <stdio.h>

int main(){
	float score;
	while(1){
		printf("请输入一个成绩:");
		scanf("%f",&score);
		if(score>=90&&score<=100){
			printf("A\n");
		}else if(score>=80&&score<90){
			printf("B\n");
		}else if(score>=70&&score<80){
			printf("C\n");
		}else if(score>=60&&score<70){
			printf("D\n");
		}else if(score>=0&&score<60){
			printf("E\n");
		}else{
			printf("成绩有误！\n");
		}
	}
	return 0;
}
