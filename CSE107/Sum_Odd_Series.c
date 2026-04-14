#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive odd integer N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d = %d\n", n, sum);

    return 0;
}