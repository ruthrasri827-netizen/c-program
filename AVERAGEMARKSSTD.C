#include <stdio.h>
int main() {
    int m1, m2, m3;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3.0;
    printf("Average marks = %.2f\n", avg);
    return 0;
}
