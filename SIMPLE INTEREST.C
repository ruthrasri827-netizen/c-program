#include <stdio.h>
int main() {
    int p, r, t;
    int si;
    printf("Enter principal: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter time: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %d\n", si);
    return 0;
}



























