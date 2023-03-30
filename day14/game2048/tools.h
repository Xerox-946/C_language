#ifndef TOOLS_H
#define TOOLS_H
#include <stdbool.h>
#include <stdio.h>
#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif

#define error(...) printf("%s %s:%d %s %m %s %s\n",__FILE__,__func__,__LINE__,__VA_ARGS__,__DATE__,__TIME__)
void rand_two(void);

void show_view(void);

bool is_end(void);

#endif//TOOLS_H
