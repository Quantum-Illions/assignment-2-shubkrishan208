#include <stdio.h>

int main() {
    float avg = 0;
    printf("Enter the five numbers: \n");
    for (int i = 0; i < 5; i++) {
        float n;
        scanf("%f", &n);
        avg += n;
    }
    avg /= 5;
    printf("The average  = %.3f", avg);
    return 0;
}