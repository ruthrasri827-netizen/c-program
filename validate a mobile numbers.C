#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num[20];
    int valid = 1;

    printf("Enter mobile number: ");
    scanf("%s", num);

    // Check length
    if (strlen(num) != 10) {
        valid = 0;
    } else {
        // Check starting digit
        if (num[0] != '6' && num[0] != '7' && num[0] != '8' && num[0] != '9') {
            valid = 0;
        } else {
            // Check all digits
            for (int i = 0; i < 10; i++) {
                if (!isdigit(num[i])) {
                    valid = 0;
                    break;
                }
            }
        }
    }

    if (valid)
        printf("Valid mobile number\n");
    else
        printf("Invalid mobile number\n");

    return 0;
}