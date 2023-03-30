#ifndef GAME2048_H
#define GAME2048_H
//初始化函数
		//申请内存
int (*arrp)[4];
int count;
int score;
void init(void);
	//启动函数
		//1.随机位置产生一个2
		//2.显示界面
		//3.获取方向键并处理
		//4.判断是否游戏结束
void start(void);
	//结束函数 保存数据、释放资源
		//释放内存
void end(void);
#endif//GAME2048_H
