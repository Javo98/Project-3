#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_gcd(int, int, int*);

int main(){
	int a, b, gcd;

	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	
	func_gcd(a, b, &gcd);

	return 0;
}

void func_gcd(int a, int b, int* gcd) {

	int quotient, remainder;
	while (a % b > 0) {
		quotient = a / b;
		remainder = a % b;
		a = b;
		b = remainder;
	}
	gcd = b;
	printf("GCD: %d\n", gcd);
}