#include <stdio.h>

int main() {
    int days, worked, count = 0, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    for (i = 1; i <= days; i++) {
        printf("Day %d (1 = worked, 0 = leave): ", i);
        scanf("%d", &worked);

        if (worked == 1)
            count++;
    }

    printf("Total days worked = %d", count);

    return 0;
}
