#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0, r = 0;
	scanf("%d%d", &q, &w);
	e = w - q;
	r = w + e;
	printf("%d\n", r);
	return 0;
}