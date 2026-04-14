#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;
    printf("%d is %s leap year\n", year, isLeap ? "a" : "not a");

    return 0;
}