#include <stdio.h>

int main() {
    int n, t = 1, f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (t <= n) {
        f *= t;
        t++;
    }
    printf("The factorial of this number = %d", f);
    return 0;
}