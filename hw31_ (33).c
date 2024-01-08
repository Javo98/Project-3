#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("");
	scanf("%d", &n);

	int matrix[3][3] = {
		{ 1, 3, 5 },
		{ 3, 3, 3 },
		{ 5, 3, 1 }
	};
	int i = 0, j = 0;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			printf("%d  ", matrix[i][j]);
		}
		putchar('\n');
	}
	float sum;
	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum += matrix[j][i];
		}
	}
	printf("%0.2f", sum / 3);

	return 0;
}

