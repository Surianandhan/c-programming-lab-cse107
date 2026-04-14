#include <stdio.h>

int main() {
    float basic, da, hra, ta, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic >= 25000) {
        da = 0.17 * basic;
        hra = 0.10 * basic;
        ta = 0.25 * da;
    } else if (basic >= 15000) {
        da = 0.20 * basic;
        hra = 0.25 * basic;
        ta = 0.50 * da;
    } else {
        da = 0.30 * basic;
        hra = 0.35 * basic;
        ta = 0.75 * da;
    }

    gross = basic + da + hra + ta;
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}