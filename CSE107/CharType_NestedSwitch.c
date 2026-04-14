#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        printf("Alphabet\n");
        if (isupper(ch))
            printf("Uppercase\n");
        else
            printf("Lowercase\n");

        switch (tolower(ch)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("Vowel\n"); break;
            default:
                printf("Consonant\n");
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
        switch (ch) {
            case '0': printf("Zero\n"); break;
            default: printf("Positive digit\n");
        }
    } else {
        printf("Special character\n");
    }

    return 0;
}