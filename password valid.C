#include <stdio.h>
#include <string.h>

int main() {
    char pass[20];

    printf("Enter password: ");
    scanf("%s", pass);

    if(strlen(pass) >= 8)
        printf("Password is Valid\n");
    else
        printf("Password is Invalid\n");

    return 0;
}