#include <stdio.h>
#define PI 3.14159

void calculateArea(float radius, float *area) {
    *area = PI * radius * radius;
}

int main() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);

    calculateArea(radius, &area);
    printf("Area = %.2f\n", area);

    return 0;
}