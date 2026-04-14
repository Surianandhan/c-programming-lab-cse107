#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, remainingSeconds);

    return 0;
}