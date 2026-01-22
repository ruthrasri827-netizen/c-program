#include <stdio.h>

int main() {
    float amount;

    printf("Enter bill amount: ");
    scanf("%f", &amount);

    if (amount >= 1000)
        printf("Discount Applied!");
    else
        printf("No Discount!");

    return 0;
}
