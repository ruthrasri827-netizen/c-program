#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    char name[20];

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da  = basic * 0.10;
    gross = basic + hra + da;

    printf("\n--- Salary Slip ---\n");
    printf("Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
