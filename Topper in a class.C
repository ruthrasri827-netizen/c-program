#include <stdio.h>

int main() {
    int marks[5], i, topper, pos;

    printf("Enter marks of 5 students:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &marks[i]);

    topper = marks[0];
    pos = 1;

    for(i = 1; i < 5; i++) {
        if(marks[i] > topper) {
            topper = marks[i];
            pos = i + 1;
        }
    }

    printf("Topper is Student %d with %d marks\n", pos, topper);

    return 0;
}