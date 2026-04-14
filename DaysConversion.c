#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = days % 7;

    printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, remainingDays);

    return 0;
}