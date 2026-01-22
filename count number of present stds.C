#include <stdio.h>

int main() {
    int n, i, present = 0, status;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter 1 for Present, 0 for Absent:\n");
    for(i = 1; i <= n; i++) {
        scanf("%d", &status);
        if(status == 1)
            present++;
    }

    printf("Number of Present Students = %d\n", present);

    return 0;
}