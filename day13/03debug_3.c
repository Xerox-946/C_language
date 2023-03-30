#include <stdio.h>

#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif

#define error(...) printf("%s %s:%d %s %m %s %s\n",__FILE__,__func__,__LINE__,__VA_ARGS__,__DATE__,__TIME__)

int main(){
	FILE* fp=fopen("a.out","r");
	if(NULL==fp){
		error("fopen");
		return 0;
	}
	printf("成功success!\n");
	return 0;
	int num=0;
	scanf("%d",&num);
	debug("ret=%d\n",num);
}
