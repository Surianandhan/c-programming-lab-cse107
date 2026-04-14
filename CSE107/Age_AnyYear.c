#include <stdio.h>

int calculateAge(int currentYear, int birthYear) {
    return currentYear - birthYear;
}

int main() {
    int currentYear, birthYear;
    printf("Enter current year: ");
    scanf("%d", &currentYear);
    printf("Enter birth year: ");
    scanf("%d", &birthYear);
    printf("Your age: %d\n", calculateAge(currentYear, birthYear));
    return 0;
}