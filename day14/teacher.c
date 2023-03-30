#include <stdio.h>

typedef struct Teacher{
	char name[20];
	char sex;
	int wid;
	unsigned char wage;
} Teacher;

void show_tch(const struct Teacher* tea);
int main(){
	Teacher tea={};
	while(1){
		printf("请输入教师的姓名、性别、工号、工龄:");
		scanf("%s %c %d %hhu",tea.name,&tea.sex,&tea.wid,&tea.wage);
		show_tch(&tea);
	}
	return 0;
}

void show_tch(const struct Teacher* tea){
		printf("教师的信息是：\n姓名:%s\n性别:%c\n工号:%d\n工龄:%hhu\n",tea->name,tea->sex,tea->wid,tea->wage);
}
