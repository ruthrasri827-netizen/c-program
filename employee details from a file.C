#include <stdio.h>

int main() {
    FILE *file;
    int id;
    char name[50];
    float salary;

    file = fopen("employee.txt", "r");  // Open file in read mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Employee Details:\n");
    printf("ID\tName\tSalary\n");

    // Read data until end of file
    while (fscanf(file, "%d %s %f", &id, name, &salary) != EOF) {
        printf("%d\t%s\t%.2f\n", id, name, salary);
    }

    fclose(file); // Close file
    return 0;
}