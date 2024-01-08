#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Calc_divide(int in1, int in2);
int Calc_remainder(int in1, int in2);

int result;

int main(void)
{
	int intNum1;
	int intNum2;
	int intCalc;

	printf("Input two Nunber : ");
	scanf_s("%d %d", &intNum1, &intNum2);

	Calc_divide(intNum1, intNum2);
	intCalc = result;
	printf("OUTPUT : divide [%d]", intCalc);

	intCalc = Calc_remainder(intNum1, intNum2);
	printf("renainder [%d]", intCalc);

	return 0;
}
void Calc_divide(int in1, int in2)
{
	result = in1 / in2;
}
int Calc_remainder(int in1, int in2)
{
	int result_remainder;
	result_remainder = in1 % in2;
	return result_remainder;
}