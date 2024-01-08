#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a;
	int b;

	printf("Input:");
	scanf("%f", &a);
	b = a + 0.5;
	printf("Use \">\" : %d\n", b > (int)a);
	printf("Use \">=\" : %d\n", b >= a);
	printf("Use \"==\" : %d\n", b == a);
	printf("Use \"!=\" : %d\n", b != (int)a);

	return 0;

}