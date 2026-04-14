#include <stdio.h>

int main() {
    int num = 25;

    loop:
    if (num <= 50) {
        printf("%d ", num);
        num++;
        goto loop;
    }
    printf("\n");

    return 0;
}