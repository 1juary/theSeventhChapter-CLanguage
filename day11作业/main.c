#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* p;
	int n;//�洢������ٸ��ֽڵĿռ��С
	char c;
	scanf("%d", &n);
	p = malloc(n);
	scanf("%c", &c);//ע����scanf��gets�м�ʹ��scanf("%c",&c),ȥ������
	//gets(p);//�����ͨ�������scanfȥ����\n,gets���Ῠס
	fgets(p, n, stdin);
	puts(p);
	return 0;
}