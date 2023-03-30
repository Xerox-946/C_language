#include <getch.h>
#include "mail.h"
#include "tools.h"
int main(){
	while(1){
		init();
		int ch=getch();
		switch(ch){
			case 49:case 51:change(ch);break;
			case 50:del();break;
			case 52:query();break;
			case 53:view();break;
			case 54:exitsystem();break;
		}
	}
	return 0;
}
