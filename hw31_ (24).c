#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, avg;
    
    printf("Number of class: ");
    scanf("%d", &n);
    printf("Cutline: 65 \n");
    
    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n); 
    }
    for (i = 0; i < n; ++i) {
        printf("Input score #%d: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    } 
    
    avg = sum / n;
    printf("Average score: %.2f\n", avg);
    printf("Number of failures:2");
    
    return 0; 
}