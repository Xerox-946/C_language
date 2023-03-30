#include <stdio.h>

enum Direction{
	UP=183,
	DOWN=184,
	LEFT=186,
	RIGHT=185
};

int main(){
	enum Direction key=UP;
	printf("%d\n",key);
}
