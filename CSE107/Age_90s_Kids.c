#include <stdio.h>
#define BIRTH_YEAR 1990

int calculateAge(int currentYear) {
    return currentYear - BIRTH_YEAR;
}

int main() {
    int currentYear;
    printf("Enter current year: ");
    scanf("%d", &currentYear);
    printf("Age of 90s kid: %d\n", calculateAge(currentYear));
    return 0;
}