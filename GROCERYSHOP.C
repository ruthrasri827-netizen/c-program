#include <stdio.h>
int main() {
    float price, total;
    int qty;
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    total = price * qty;
    printf("Total Bill = Rs. %.2f", total);
    return 0;
}
