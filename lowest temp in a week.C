#include <stdio.h>

int main() {
    int temp[7], i;
    int max, min;

    printf("Enter temperatures for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }

    max = min = temp[0];

    for(i = 1; i < 7; i++) {
        if(temp[i] > max)
            max = temp[i];
        if(temp[i] < min)
            min = temp[i];
    }

    printf("Highest Temperature = %d\n", max);
    printf("Lowest Temperature = %d\n", min);

    return 0;
}