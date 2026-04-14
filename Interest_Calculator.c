#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, interest;
    int choice;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in decimal): ");
    scanf("%f", &rate);
    printf("Enter time period (years): ");
    scanf("%f", &time);

    printf("Choose:\n1. Simple Interest\n2. Compound Interest\n");
    scanf("%d", &choice);

    if (choice == 1) {
        interest = principal * rate * time;
        printf("Simple Interest: %.2f\n", interest);
    } else if (choice == 2) {
        interest = principal * pow((1 + rate), time) - principal;
        printf("Compound Interest: %.2f\n", interest);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}