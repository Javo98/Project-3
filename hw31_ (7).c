#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int total_months;
	int price;
	float  m_pay;

	printf("Enter the whole amount of money:");
	scanf("%d", &price);
	printf("Enter the duration 'Months': ");
	scanf("%d", &total_months);


	int months = total_months / 2;
	m_pay = (float)price / months;
	float percentage_per_month = m_pay * 0.05;
	float total_amount = price + percentage_per_month;

	printf("Price %d\n", price);
	printf("Months\t\t : \t %d  \t%d\n", months, total_months);
	printf("Payment\t\t : \t %d \t %10.2f\n", price, total_amount);

	printf("Pay/Month\t : %10.2f \t%10.2f\n", m_pay, percentage_per_month);

	return 0;
}
