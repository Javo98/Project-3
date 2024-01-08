#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a, b, c, sum;
	double score;
	char grade = 'F';

	printf("Input:");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	score = (double)sum / 3;

	if (score >= 90)
	{
		printf("Grade: A\n");
	}
	else
	{
		if (score >= 80)
		{
			printf("Grade: B\n");
		}
		else
		{
			if (score >= 60)
			{
				printf("Grade: C\n");
			}
			else
			{
				if (score >= 50)
				{
					printf("Grade: D\n");
				}
				else
				{
					printf("Grade: F\n");
				}
			}
			return 0;
		}
	}
}