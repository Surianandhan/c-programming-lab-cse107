#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("Lowercase: %c\n", tolower(ch));
    else if (islower(ch))
        printf("Uppercase: %c\n", toupper(ch));
    else
        printf("Not an alphabet\n");

    return 0;
}