#include <stdio.h>
#include <stdlib.h>

//结构体指针
struct student {
	int num;
	char name[20];
	char sex;
};

int main()
{
	struct student s = { 1001,"wangle",'M' };
	struct student* p;
	p = &s;
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);
	printf("%d %s %c\n", p->num,p->name,p->sex);//指针的成员选择，很重要
	//结构体初始化
	struct student sarr[3] = { 1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F' };
	int num;
	p = sarr;
	printf("------------------------------\n");//下面一部分不重要
	num = p->num++;//num=p->num;p->num++
	printf("num=%d,p->num=%d\n", num, p->num);//1001,1002
	num = p++->num;//num=p->num;p++;
	printf("num=%d,p->num=%d\n", num, p->num);//1002,1005
	return 0;
}
