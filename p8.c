#include <stdio.h>

int main() {
    int n;
positive:
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("You entered a negative number!");
        goto positive;
    } else {
        printf("The number entered is %d", n);
    }

    return 0;
}