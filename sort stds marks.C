#include <stdio.h>

int main() {
    int marks[5], i, j, temp;

    printf("Enter 5 student marks:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(marks[i] > marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("Sorted marks:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}