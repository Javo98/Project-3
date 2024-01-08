#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1998, b = 6, c = 30;
	int d = 2020;
	int e = 19980630;

	printf("Birthday:%d\n", e);
	printf("Your birthday is %d / %d / %d\n", a, b, c);
	printf("Year : %d\n", d);
	printf("In 2020, your age is %d\n", d - a);

	return 0;
}