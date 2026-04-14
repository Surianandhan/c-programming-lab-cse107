#include <stdio.h>

int main() {
    int runtimeArray[5];
    printf("Runtime initialized array (garbage values): ");
    for (int i = 0; i < 5; i++)
        printf("%d ", runtimeArray[i]);
    printf("\n");

    int compileTimeArray[] = {10, 20, 30, 40, 50};
    printf("Compile-time initialized array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", compileTimeArray[i]);
    printf("\n");

    return 0;
}