#include <stdio.h>
#include <math.h>

int main() {
    float p, r, ci;
    int n;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time (years): ");
    scanf("%d", &n);

    ci = p * pow(1 + r / 100, n) - p;

    printf("Compound Interest = %.2f", ci);

    return 0;
}
