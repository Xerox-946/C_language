#include <stdio.h>

int main(){
	printf("%d\n",sizeof(unsigned int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(10));
	printf("%d\n",sizeof(10l));
	printf("%d\n",sizeof(10ll));
	printf("%d\n",sizeof(10u));
	printf("%d\n",sizeof(10lu));
	printf("%d\n",sizeof(10llu));

	return 0;
}
