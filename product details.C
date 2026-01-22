#include <stdio.h>

struct Product { int id; char name[20]; float price; };

int main() {
    struct Product p;
    int ch;
    scanf("%d %s %f", &p.id, p.name, &p.price);

    while (1) {
        scanf("%d", &ch);
        if (ch==1) printf("%d %s %.2f\n", p.id, p.name, p.price);
        else if (ch==2) { scanf("%f", &p.price); }
        else break;
    }
    return 0;
}