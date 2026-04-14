#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3, perimeter, semiperimeter, area;

    printf("Enter side 1: ");
    scanf("%f", &side1);
    printf("Enter side 2: ");
    scanf("%f", &side2);
    printf("Enter side 3: ");
    scanf("%f", &side3);

    perimeter = side1 + side2 + side3;
    semiperimeter = perimeter / 2;

    area = sqrt(semiperimeter * (semiperimeter - side1) *
                (semiperimeter - side2) * (semiperimeter - side3));

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}