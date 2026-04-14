#include <stdio.h>

int main() {
    int amount, total;

    printf("Enter amount: ");
    scanf("%d", &amount);

    total = amount / 2000;
    printf("2000: %d\n", total);
    amount %= 2000;

    total = amount / 500;
    printf("500: %d\n", total);
    amount %= 500;

    total = amount / 200;
    printf("200: %d\n", total);
    amount %= 200;

    total = amount / 100;
    printf("100: %d\n", total);
    amount %= 100;

    total = amount / 50;
    printf("50: %d\n", total);
    amount %= 50;

    total = amount / 20;
    printf("20: %d\n", total);
    amount %= 20;

    total = amount / 10;
    printf("10: %d\n", total);
    amount %= 10;

    total = amount / 5;
    printf("5: %d\n", total);
    amount %= 5;

    total = amount / 2;
    printf("2: %d\n", total);
    amount %= 2;

    printf("1: %d\n", amount);

    return 0;
}