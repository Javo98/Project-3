#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sqr(int);
int main() {
    int a;
    int square;
    printf("Input: ");
    scanf("%d", &a);

    square = sqr(a);
    printf("Output: %d\n", square);

    return 0;

}
int sqr(int x) {
    return x * x;
}


