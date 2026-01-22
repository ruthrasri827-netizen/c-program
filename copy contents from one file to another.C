#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    fclose(source);
    fclose(dest);

    return 0;
}