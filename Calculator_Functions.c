#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float a, b;
    char op;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", add(a, b)); break;
        case '-': printf("Result = %.2f\n", sub(a, b)); break;
        case '*': printf("Result = %.2f\n", mul(a, b)); break;
        case '/': printf("Result = %.2f\n", div(a, b)); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}