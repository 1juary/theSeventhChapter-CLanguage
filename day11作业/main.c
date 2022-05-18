#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* p;
	int n;//存储申请多少个字节的空间大小
	char c;
	scanf("%d", &n);
	p = malloc(n);
	scanf("%c", &c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
	//gets(p);//如果不通过上面的scanf去消除\n,gets不会卡住
	fgets(p, n, stdin);
	puts(p);
	return 0;
}