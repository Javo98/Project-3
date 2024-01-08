#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, reversedN = 0, remainder, originalN;
	printf("Input:");
	scanf("%d", &n);
	originalN = n;

	if (n < 0)
	{
		printf("Input number cannot be negative ");
	}
	else
	{

		while (n != 0) {
			remainder = n % 10;
			reversedN = reversedN * 10 + remainder;
			n /= 10;
		}

		if (originalN == reversedN)
			printf("%d is a palindrome number.", originalN);
		else
			printf("%d is not a palindrome.", originalN);
	}

	return 0;
}