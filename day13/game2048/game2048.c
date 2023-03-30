#include <stdlib.h>
#include <stdio.h>
#include <getch.h>
#include <stdbool.h>
#include "game2048.h"
#include "direction.h"
#include "tools.h"
//初始化函数
		//申请内存
void init(void){
	arrp=(int (*)[4])malloc(sizeof(int)*4*4);
	count=0;
	score=0;
}
	//启动函数
		//1.随机位置产生一个2
		//2.显示界面
		//3.获取方向键并处理
		//4.判断是否游戏结束
void start(void){
	int ch;
	rand_two();
	show_view();
	while(1){
		ch=getch();
		switch(ch){
			case 183:up();break;
			case 184:down();break;
			case 186:left();break;
			case 185:right();break;
		}
		if(is_move){
			rand_two();
			show_view();
		}
		is_move=false;
		if(is_end()){
			break;
		}
	}	
}
	//结束函数
		//释放内存
void end(void){
	free(arrp);
	arrp=NULL;
	printf("游戏结束！小垃圾！\n");
	exit(0);
}
