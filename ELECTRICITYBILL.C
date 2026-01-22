#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
        bill = units * 1;
    else if (units <= 200)
        bill = units * 2;
    else
        bill = units * 3;
    printf("Electricity Bill = %.2f\n", bill);
    return 0;
}
