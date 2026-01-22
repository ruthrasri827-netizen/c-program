#include <stdio.h>

struct Course {
    int id;
    char name[30];
    int duration;  // in months
};

int main() {
    struct Course c;

    printf("Enter Course ID: ");
    scanf("%d", &c.id);

    printf("Enter Course Name: ");
    scanf("%s", c.name);

    printf("Enter Duration (months): ");
    scanf("%d", &c.duration);

    printf("\n--- Course Details ---\n");
    printf("ID: %d\n", c.id);
    printf("Name: %s\n", c.name);
    printf("Duration: %d months\n", c.duration);

    return 0;
}