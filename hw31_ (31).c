#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE];
	int i, max, min, size;

	printf("Enter size of the array: ");
	scanf("%d", &size);

	printf("Input (10 numbers): ");

	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = size - 1; i >= 0; i--) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	max = arr[0];
	min = arr[0];
	for (i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("Max: %d, ", max);
	printf("Min: %d", min);

	return 0;
}