#include <stdio.h>

int main() {
    int decimal, choice, binary[25], octal[25], i, j;

    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    printf("1. Binary 2. Octal: ");
    scanf("%d", &choice);

    if (choice == 1) {
        i = 0;
        int temp = decimal;
        while (temp > 0) {
            binary[i++] = temp % 2;
            temp /= 2;
        }
        printf("Binary: ");
        for (j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);
        printf("\n");
    } else if (choice == 2) {
        i = 0;
        int temp = decimal;
        while (temp > 0) {
            octal[i++] = temp % 8;
            temp /= 8;
        }
        printf("Octal: ");
        for (j = i - 1; j >= 0; j--)
            printf("%d", octal[j]);
        printf("\n");
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}