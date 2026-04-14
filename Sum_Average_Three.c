#include <stdio.h>

int main() {
    int a, b, c, total;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    total = a + b + c;
    average = total / 3.0;

    printf("Sum = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}