#include <stdio.h>

int main() {
    int a, b, largest;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    largest = (a > b) ? a : b;
    printf("Largest = %d\n", largest);

    return 0;
}