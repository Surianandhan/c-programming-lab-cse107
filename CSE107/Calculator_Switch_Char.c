#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Sum = %d\n", a + b); break;
        case '-': printf("Difference = %d\n", a - b); break;
        case '*': printf("Product = %d\n", a * b); break;
        case '/': printf("Quotient = %d\n", a / b); break;
        case '%': printf("Remainder = %d\n", a % b); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}