#include <stdio.h>

int main() {
    int sales[7], i, total = 0;

    printf("Enter sales for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &sales[i]);
        total += sales[i];
    }

    printf("Total Weekly Sales = %d\n", total);

    return 0;
}