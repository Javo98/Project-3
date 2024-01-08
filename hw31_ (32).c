#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[100] = { '\0' };
	int i;

	printf("Enter a string :");

	i = 0;
	while (1){
		scanf("%c", &s[i]);
		{
			if (s[i] == '\n') {
				break;
			}
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			i++;
		}
	}
	printf("String in Upper Case :%s", s);

	return 0;
}