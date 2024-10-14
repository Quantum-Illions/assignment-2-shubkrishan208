#include <stdio.h>

int main() {
    int m;
    printf("Enter the marks: ");
    scanf("%d", &m);
    if (m >= 40) {
        printf("Pass");
    } else {
        printf("Fail");
    }
    return 0;
}