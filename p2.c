#include <stdio.h>

int main() {
    int a;
    float b;
    printf("Enter the integer: ");
    scanf("%d", &a);
    printf("Enter the decimal: ");
    scanf("%f", &b);
    int t = (int)b;  // this is a template variable to swap value of a and b
                     // with type casting
    b = (float)a;
    a = t;
    printf("\nThe typecasted values: \n%.2f\n%d", b, a);
    return 0;
}