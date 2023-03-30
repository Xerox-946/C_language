#include <stdlib.h>
#include <getch.h>
#include <time.h>
#include <stdbool.h>
#include "game2048.h"
#include "direction.h"
#include "tools.h"
//初始化函数
//申请内存
void init(void){
	debug("%s\n",__func__);
	srand(time(NULL));
	arrp=(int (*)[4])calloc(sizeof(arrp[0][0]),4*4);
	count=0;
	score=0;
}
	//启动函数
		//1.随机位置产生一个2
		//2.显示界面
		//3.获取方向键并处理
		//4.判断是否游戏结束
void start(void){
	debug("%s\n",__func__);
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
			return;
		}
	}	
}
	//结束函数
		//释放内存
void end(void){
	debug("%s\n",__func__);
	free(arrp);
	arrp=NULL;
	printf("游戏结束！小垃圾！\n");
	exit(0);
}
