#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float dev1(float, float, float, float);
float dev2(float, float);
float dev3(float, float);
float dev4(float, float);
float dev5(float, float);



int main() {
    float num1, num2, num3, num4;
    float average;
    float means1, means2, means3, means4;

    printf("Enter  the first number : ");
    scanf("\n%f", &num1);
    printf("Enter  the first number : ");
    scanf("\n%f", &num2);
    printf("Enter  the first number : ");
    scanf("\n%f", &num3);
    printf("Enter  the first number : ");
    scanf("\n%f", &num4);

    average = dev1(num1, num2, num3, num4);
    printf("********   average is  %f   *********", average);

    means1 = dev2(num1, average);
    means2 = dev3(num2, average);
    means3 = dev4(num3, average);
    means4 = dev5(num4, average);
    printf("\nFirst number :  \t\t %10.0f  -- deviation : \t %10.2f", num1, means1);
    printf("\nSecond number : \t\t %10.0f  -- deviation : \t %10.2f", num2, means2);
    printf("\nThird number :  \t\t %10.0f  -- deviation : \t %10.2f", num3, means3);
    printf("\nFourth number : \t\t %10.0f  -- deviation : \t %10.2f\n", num4, means4);
}

float dev1(float num1, float num2, float num3, float num4) {

    float sum = (num1 + num2 + num3 + num4) / 4;
    return sum;
}
float dev2(float num1, float average) {
    float num1_1 = num1 - average;
    return num1_1;
}
float dev3(float num2, float average) {
    float num2_2 = num2 - average;
    return num2_2;
}
float dev4(float num3, float average) {
    float num3_3 = num3 - average;
    return num3_3;
}
float dev5(float num4, float average) {
    float num4_4 = num4 - average;
    return num4_4;
}
