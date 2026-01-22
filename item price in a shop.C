#include <stdio.h>

int main() {
    int price[5] = {50, 100, 150, 200, 250};
    int i, item, found = 0;

    printf("Enter item number (1 to 5): ");
    scanf("%d", &item);

    for(i = 0; i < 5; i++) {
        if(item == i + 1) {
            printf("Item Price = %d\n", price[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Item not found\n");

    return 0;
}