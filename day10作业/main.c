#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void change(int* p)//相当于p=&i,*&i等价于i
{
	*p = *p / 2;
}

int main()
{
	int i;
	scanf("%d", &i);
	change(&i);
	printf("%d\n", i);
	return 0;
}