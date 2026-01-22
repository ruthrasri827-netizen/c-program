#include <stdio.h>

struct Bank { int acc; char name[20]; float bal; };

int main() {
    struct Bank b;
    int ch; float amt;
    scanf("%d %s %f", &b.acc, b.name, &b.bal);
    while (1) {
        scanf("%d", &ch);
        if (ch==1){ scanf("%f",&amt); b.bal+=amt; }
        else if (ch==2){ scanf("%f",&amt); if(amt<=b.bal) b.bal-=amt; }
        else if (ch==3) printf("%d %s %.2f\n", b.acc, b.name, b.bal);
        else break;
    }
    return 0;
}