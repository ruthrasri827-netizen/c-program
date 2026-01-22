#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);
    return 0;
}