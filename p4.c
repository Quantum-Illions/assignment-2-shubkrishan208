#include <stdio.h>

enum { monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday };
int main() {
    printf("Enter a number:");
    int n;
    scanf("%d", &n);
    switch (n) {
        case monday:
            printf("Monday");
            break;

        case tuesday:
            printf("Tuesday");
            break;

        case wednesday:
            printf("Wednesday");
            break;

        case thursday:
            printf("Thursday");
            break;

        case friday:
            printf("Friday");
            break;

        case saturday:
            printf("Saturday");
            break;

        case sunday:
            printf("Sunday");
            break;
    }
    return 0;
}