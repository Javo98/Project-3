#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char string[10] = { '1','2','3','4','5','6','7','8','9' };
	int i;
	int toInt = 0;

	i = 0;

	while (1) {
		scanf("%c", &string[i]);
		if (string[i] == '\n') {
			string[i] = '\0';
			break;
		}
		i++;
	}

	for (i = 0; i < 10; i++) {
		toInt = toInt * 10;
		toInt = toInt + (string[i] - '0');
	}
	printf("Result: %d\n", toInt);
	
	return 0;
}