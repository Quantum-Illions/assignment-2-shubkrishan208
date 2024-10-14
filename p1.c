#include <stdio.h>

// program to calculate sum of two numbers 'a' and 'b'
int t = 0;  // global variable to count the times the code has run
int main() {
    printf("This is a program to add the two numbers entered\n ");
    char c;
    do {
        printf("Enter the two numbers to make a sum: ");
        int a,
            b;  // the local variables which store the values the user inputs to
                // add
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        t++;
        printf("repeat? (Y/N) \n");
        scanf("  %c", &c);
    } while (c == 'Y' || c == 'y');
    printf("The program has run for %d times\n", t);
    printf("Exiting...\n");

    return 0;
}