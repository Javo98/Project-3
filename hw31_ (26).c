#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, a, b, temp;
	int sum, sum1, sum2, sum3;

	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);

	if (b < 1){
		printf("Input is less than 1 \n");
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;
	
	for (i = a; i <= b; i++) {
		if (i % 2 == 0)
			sum1 += i;
	}
	for (i = a; i <= b; i++) {
		if (i % 3 == 0)
			sum2 += i;
	}
	for (i = a; i <= b; i++) {
		if (i % 6 == 0)
			sum3 += i;
	}
	sum = sum1 + sum2 - sum3;
	printf("Result:%d\n", sum);

	return 0;
}