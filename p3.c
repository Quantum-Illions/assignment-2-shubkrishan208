#include <stdio.h>

int main() {
    const double pi = 3.14159;
    double r, area;
    printf("enter the radius of the circle: ");
    scanf("%lf", &r);
    area = pi * r * r;
    printf("The area of the circle = %.5lf", area);
    printf("\nExiting...");
    return 0;
}