#include <stdio.h>

int main() {
    float income, expenses, savings;

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter monthly expenses: ");
    scanf("%f", &expenses);

    savings = income - expenses;

    printf("Monthly Savings = %.2f", savings);

    return 0;
}
