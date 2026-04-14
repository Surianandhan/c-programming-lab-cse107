#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float charge, total, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199)
        charge = 1.20;
    else if (units < 400)
        charge = 1.50;
    else if (units < 600)
        charge = 1.80;
    else
        charge = 2.00;

    total = units * charge;
    if (total > 400)
        surcharge = total * 0.15;
    total += surcharge;
    if (total < 100)
        total = 100;

    printf("\nCustomer ID: %d\nName: %s\nUnits: %d\nTotal Bill: Rs. %.2f\n", customerID, name, units, total);

    return 0;
}