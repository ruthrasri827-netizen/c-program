#include <stdio.h>
int main() {
    int minutes, hours, remainingMinutes;
    printf("Enter total minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    remainingMinutes = minutes % 60;
    printf("%d minutes = %d hours and %d minutes", minutes, hours, remainingMinutes);
    return 0;
}
