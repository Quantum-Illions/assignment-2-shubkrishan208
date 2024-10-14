#include <stdio.h>

int main() {
    int a, b;
    char c;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Operation: ");
    scanf(" %c", &c);
    switch (c) {
        case '+':
            printf("Output: %d", a + b);
            break;
        case '-':
            printf("Output: %d", a - b);
            break;
        case '*':
            printf("Output: %d", a * b);
            break;
        case '/':
            printf("Output: %d", a / b);
            break;
        default:
            printf("Input error. Please Enter a valid operation.");
            break;
    }
    return 0;
}