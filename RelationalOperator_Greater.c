#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (a > b)
        printf("First number is greater\n");
    else if (b > a)
        printf("Second number is greater\n");
    else
        printf("Both are equal\n");

    return 0;
}