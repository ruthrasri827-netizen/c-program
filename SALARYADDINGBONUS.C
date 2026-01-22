#include <stdio.h>
int main() {
    float salary, bonus, totalSalary;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter bonus: ");
    scanf("%f", &bonus);
    totalSalary = salary + bonus;
    printf("Total salary after bonus = %.2f", totalSalary);
    return 0;
}
