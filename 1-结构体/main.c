#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ṹ����ռ�ÿռ���68���ֽڣ���Ϊ���ڶ��룬�����Ŀ����
//Ϊ�����cpu�����ڴ��Ч��
struct student {
	int num;//num�ǽṹ���Ա
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};  //�ṹ������������ע�����һ��Ҫ�ӷֺ�

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
