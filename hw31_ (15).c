#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int a, b;
int main()
{
	int a, b;
	int result;

	printf("Input two Number:");
	scanf("%d %d", &a, &b);

	result = a + b;
	printf("a+b=%d, ", result);

	result = a - b;
	printf("a-b=%d, ", result);

	result = a * b;
	printf("a*b=%d, ", result);

	result = a / b;
	printf("a/b=%d, ", result);

	return 0;
}