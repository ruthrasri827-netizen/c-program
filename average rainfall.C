#include <stdio.h>

int main() {
    float rain[7], total = 0, avg;
    int i;

    printf("Enter rainfall for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%f", &rain[i]);
        total += rain[i];
    }

    avg = total / 7;
    printf("Average Rainfall = %.2f\n", avg);

    return 0;
}