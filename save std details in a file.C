#include <stdio.h>

int main() {
    FILE *file;
    int id;
    char name[50];
    float marks;

    
    file = fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Student ID: ");
    scanf("%d", &id);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    
    fprintf(file, "ID: %d, Name: %s, Marks: %.2f\n", id, name, marks);

    fclose(file);

    printf("Student details saved successfully!\n");
    return 0;
}