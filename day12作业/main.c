#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int step(int n)
{
	if (1 == n || 2 == n) //�ݹ�Ľ�������
	{
		return n;
	}
	return step(n - 1) + step(n - 2);//�ݹ鹫ʽ
}

int main()
{
	int n;//�洢̨��
	scanf("%d", &n);
	printf("%d\n", step(n));
	return 0;
}