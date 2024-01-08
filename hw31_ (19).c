#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("Input: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d is even number.\n", num);
	else
		printf("%d is odd number.\n", num);

	return 0;
}
