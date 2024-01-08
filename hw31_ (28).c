#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, first = 0, second = 1, third;
	printf("Input n:");
	scanf("%d", &n);
	int i = 2;
	if (n < 0)
	{
		printf("n cannot be negative number.\n");
	}
	else 

	do {
		third = first + second;
		printf("fib  %d\n", third);

		first = second;
		second = third;
		i++;
	} while (i <= n);

	return 0;
}