#include <stdio.h>
#define HELLO() printf("hello, world\n")

int main() {
    printf("Inside main()\n");
    HELLO();
    printf("Back to main()\n");
    return 0;
}