#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int x, int y);

int main(void)
{
	int x;
	int y;
	int var;

	printf(" Input two Number Win \n");

	x = 1;
	y = 2;

	add(x, y);
	printf("\t\tx : %d\n", x);
	printf("\t\ty : %d\n", y);
	printf("Before : x = [%d] y = [%d]\n", x, y);

	var = x;
	x = y;
	y = var;
	printf("After  : x = [%d] y = [%d]\n", x, y);

	return 0;
}
void add(int x, int y)
{
	x = x + y;
}