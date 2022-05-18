#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int step(int n)
{
	if (1 == n || 2 == n) //递归的结束条件
	{
		return n;
	}
	return step(n - 1) + step(n - 2);//递归公式
}

int main()
{
	int n;//存储台阶
	scanf("%d", &n);
	printf("%d\n", step(n));
	return 0;
}