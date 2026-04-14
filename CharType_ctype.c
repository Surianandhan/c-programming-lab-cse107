#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("%c is uppercase\n", ch);
    else if (islower(ch))
        printf("%c is lowercase\n", ch);
    else if (isdigit(ch))
        printf("%c is a digit\n", ch);
    else
        printf("%c is special character\n", ch);

    return 0;
}