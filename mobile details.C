#include <stdio.h>

struct Mobile {
    int id;
    char brand[20];
    float price;
};

int main() {
    struct Mobile m;

    printf("Enter Mobile ID: ");
    scanf("%d", &m.id);

    printf("Enter Brand: ");
    scanf("%s", m.brand);

    printf("Enter Price: ");
    scanf("%f", &m.price);

    printf("\n--- Mobile Details ---\n");
    printf("ID: %d\n", m.id);
    printf("Brand: %s\n", m.brand);
    printf("Price: %.2f\n", m.price);

    return 0;
}