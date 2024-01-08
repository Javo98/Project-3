#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int, int);
int main() {

	int num1;
	int num2;
	int result;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	result = calc(num1, num2);

	printf("%d + %d = %d\n", num1, num2, result);


	return 0;
}

int calc(int num1, int num2) {

	return num1 + num2;
}
