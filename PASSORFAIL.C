#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}
