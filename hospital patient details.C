#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main() {
    struct Patient p;

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);

    printf("Enter Patient Name: ");
    scanf("%s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Disease: ");
    scanf("%s", p.disease);

    printf("\n--- Patient Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Disease: %s\n", p.disease);

    return 0;
}