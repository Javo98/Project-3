#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i;
	int oddSum = 0;
	int evenSum = 0;

	printf("Enter two numbers:");
	scanf("%d%d", &num1, &num2);

	if (num1 > num2)
	{
		i = num1;
		num1 = num2;
		num2 = i;
	}
	for (i = num1; i <= num2; i++)
	{
		if (i%2 == 0)
			evenSum += i;
		else
			oddSum += i;
	}
	printf("%d���� %d���� \n", num1, num2);

	printf("Ȧ����=%d\n", oddSum);
	printf("¦����=%d\n", evenSum);

	return 0;
}