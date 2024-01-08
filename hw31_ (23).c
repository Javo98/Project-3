#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{

    int a, b, c;

    printf("Input:");
    scanf_s("%d%d%d", &a, &b, &c);

    if (a > b)//a>b
    {
        if (a > c)//a>b, a>c
        {
            if (b > c)//a>b>c
            {
                printf("Result: %d %d %d\n", a, b, c);
            }
            else//a>c>=b
            {
                printf("Result: %d %d %d\n", a, c, b);
            }
        }
        else//c>=a>b
        {
            printf("Result: %d %d %d\n", c, a, b);
        }
    }
    else//b>=a
    {
        if (b > c)//b>=a, b>c
        {
            if (a > c)//b>=a>c
            {
                printf("Result: %d %d %d\n", b, a, c);
            }
            else//b>=c>=a
            {
                printf("Result: %d %d %d\n", b, c, a);
            }
        }
        else//c>=b>=a
        {
            printf("Result: %d %d %d\n", c, b, a);
        }
    }

    return 0;

}