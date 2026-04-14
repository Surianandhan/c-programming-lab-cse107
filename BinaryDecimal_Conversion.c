#include <stdio.h>

long long decimalToBinary(int n) {
    long long binary = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * (1 << i); // 2^i
        i++;
    }
    return decimal;
}

int main() {
    long long binary;
    int decimal;

    printf("Enter binary: ");
    scanf("%lld", &binary);
    printf("Decimal = %d\n", binaryToDecimal(binary));

    printf("Enter decimal: ");
    scanf("%d", &decimal);
    printf("Binary = %lld\n", decimalToBinary(decimal));

    return 0;
}