#include <stdio.h>

int main() {
    int a, b, *ptr1, *ptr2, choice;
    ptr1 = &a;
    ptr2 = &b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("1.Add 2.Sub 3.Mul 4.Div 5.Mod\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Sum = %d\n", *ptr1 + *ptr2); break;
        case 2: printf("Difference = %d\n", *ptr1 - *ptr2); break;
        case 3: printf("Product = %d\n", *ptr1 * *ptr2); break;
        case 4: printf("Quotient = %d\n", *ptr1 / *ptr2); break;
        case 5: printf("Remainder = %d\n", *ptr1 % *ptr2); break;
        default: printf("Invalid\n");
    }

    return 0;
}