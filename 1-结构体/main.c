#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//结构体所占用空间是68个字节，因为存在对齐，对齐的目的是
//为了提高cpu访问内存的效率
struct student {
	int num;//num是结构体成员
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};  //结构体类型声明，注意最后一定要加分号

int main()
{
	struct student s = {1001,"lele",'m',20,98.5,"Shenzhen"};
	struct student sarr[3];
	int i;
	printf("%d %s %c %d %5.2f %s\n", s.num,s.name,s.sex,s.age,s.score,s.addr);
	for (i = 0; i < 3; i++)
	{
		scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d %s %c %d %f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex,
			sarr[i].age, sarr[i].score, sarr[i].addr);
	}

	return 0;
}
