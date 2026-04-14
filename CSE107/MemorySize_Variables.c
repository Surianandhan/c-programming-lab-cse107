#include <stdio.h>

int main() {
    short int a;
    int b;
    long int c;
    float d;
    double e;
    char f;

    printf("short int: %zu\n", sizeof(a));
    printf("int: %zu\n", sizeof(b));
    printf("long int: %zu\n", sizeof(c));
    printf("float: %zu\n", sizeof(d));
    printf("double: %zu\n", sizeof(e));
    printf("char: %zu\n", sizeof(f));

    return 0;
}