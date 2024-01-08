#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;
	int j;
	int n;

	printf("Input:");
	scanf("%d", &n);

	while (i <= n)
	{
		printf("\n");
		i = 1;

		while (i <= n) {
			j = i;
			while (j <= n) {
				printf(" ");
				j++;
			}
			j = 1;
			while (j <= 2 * i - 1) {
				printf("*");
				j++;
			}
			printf("\n");
			i++;
		}

		return 0;
	}
}