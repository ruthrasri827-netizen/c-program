#include <stdio.h>
#include <stdlib.h>

struct Item {int id, qty; char name[20]; float price;};

void add() {
    FILE *f = fopen("inv.txt","a");
    struct Item it;
    scanf("%d %s %d %f",&it.id,it.name,&it.qty,&it.price);
    fprintf(f,"%d %s %d %.2f\n",it.id,it.name,it.qty,it.price);
    fclose(f);
}

void show() {
    FILE *f = fopen("inv.txt","r");
    struct Item it;
    while (fscanf(f,"%d %s %d %f",&it.id,it.name,&it.qty,&it.price)!=EOF)
        printf("%d %s %d %.2f\n",it.id,it.name,it.qty,it.price);
    fclose(f);
}

int main() {
    int ch;
    printf("1.Add 2.Show\n");
    scanf("%d",&ch);
    if(ch==1) add();
    else show();
    return 0;
}