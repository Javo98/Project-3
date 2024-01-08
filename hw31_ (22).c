#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

float ADD(float a, float b) {
	return a + b;
}
float SUB(float a, float b) {
	return a - b;
}
float MUL(float a, float b) {
	return a * b;
}
float DIV(float a, float b) {
	return a / b;
}

int main(int argc, char* argv[])
{
	float a, b;
	char op;
	float total;
	float (*Cal)(float, float);

	printf("Operator(+, -, *,/)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5) \n");
	scanf("%f %c %f", &a, &op, &b);

	switch (op){
		case '+': Cal = ADD; break;
		case '-': Cal = SUB; break;
		case '*': Cal = MUL; break;
		case '/': Cal = DIV; break;
		default:
			return 0;
			printf("Invalid operator: \n");
			break;
	}

	total = Cal(a, b);

	printf("%0.2f %c %0.2f = %0.2f\n", a, op, b, total);

	system("pause");
	return 0;
}