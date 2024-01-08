#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int  value_1;
	int  value_2;
	int  output1, output2;
	printf("Enter a number: ");
	scanf("%d", &value_1);
	printf("Enter a second number: ");
	scanf("%d", &value_2);

	output1 = value_1 / value_2;
	output2 = value_1 % value_2;

	printf(" %d ", value_1);
	printf(" / %d ", value_2);
	printf("is %d ", output1);
	printf(" with a remainder of %d\n", output2);
	return 0;
}
