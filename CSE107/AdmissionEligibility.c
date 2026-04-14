#include <stdio.h>

int main() {
    int maths, physics, chemistry, total, mathsPhysics;

    printf("Enter Maths, Physics, Chemistry marks: ");
    scanf("%d %d %d", &maths, &physics, &chemistry);

    total = maths + physics + chemistry;
    mathsPhysics = maths + physics;

    if (maths >= 65 && physics >= 55 && chemistry >= 50 && (total >= 190 || mathsPhysics >= 140))
        printf("Eligible for admission\n");
    else
        printf("Not eligible\n");

    return 0;
}