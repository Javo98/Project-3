#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int year;
    printf(" Enter the year to be leap year : ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("This year is a leap year.\n");
            }
            else {
                printf("This year is not a leap year.\n");
            }
        }
        else {
            printf("This year is a leap year.\n");
        }
    }
    else if (year % 4 == 1) {
        printf("This year is not a leap year.\n");
        printf("The leap year is %d\n", year - 1);
    }
    else if (year % 4 == 2) {
        printf("This year is not a leap year.\n");
        printf("The leap year is %d\n ", year - 2);
    }
    else if (year % 4 == 3) {
        printf("This year is not a leap year.\n");
        printf("The leap year is %d\n", year - 3);
    }
    else if (year % 4 == 4) {
        printf("This year is not a leap year.\n");
        printf("The leap year is %d\n", year - 4);
    }

    return 0;
}