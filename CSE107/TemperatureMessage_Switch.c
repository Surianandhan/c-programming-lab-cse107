#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    switch ((int)temp) {
        case -100 ... -1: printf("Freezing weather\n"); break;
        case 0 ... 10: printf("Very cold weather\n"); break;
        case 11 ... 20: printf("Cold weather\n"); break;
        case 21 ... 30: printf("Normal temperature\n"); break;
        case 31 ... 40: printf("Hot weather\n"); break;
        default: printf("Very hot weather\n");
    }

    return 0;
}