#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a++ (unary): %d\n", a++);
    printf("b++ (unary): %d\n", b++);
    printf("a + b (binary): %d\n", a + b);
    printf("a - b (binary): %d\n", a - b);

    return 0;
}