#include <stdio.h>

int main() {
    int n, num;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    average = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}