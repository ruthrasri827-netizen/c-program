#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day >= 1 && day <= 5)
        printf("Working Day");
    else if (day == 6 || day == 7)
        printf("Weekend");
    else
        printf("Invalid day");

    return 0;
}
