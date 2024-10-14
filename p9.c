#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++) {
        printf("%d ", i + 1);
        if ((i + 1) % 47 == 0) break;
    }
    printf("Exiting...");
    return 0;
}