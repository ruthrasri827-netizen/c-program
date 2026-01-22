#include <stdio.h>

int main() {
    int n, i, mark, total = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &mark);
        total += mark;
    }

    printf("Total Marks = %d", total);

    return 0;
}
