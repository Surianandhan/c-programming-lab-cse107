#include <stdio.h>

int main() {
    char name[50];
    int regNumber;
    float marks[5], total = 0, average;
    int i;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter register number: ");
    scanf("%d", &regNumber);
    printf("Enter marks in 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / 5;

    printf("\n--- Report Card ---\n");
    printf("Name: %s\n", name);
    printf("Register Number: %d\n", regNumber);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 75)
        printf("Grade: First Class with Distinction\n");
    else if (average >= 60)
        printf("Grade: First Class\n");
    else if (average >= 50)
        printf("Grade: Second Class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}