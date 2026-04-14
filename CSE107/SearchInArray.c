#include <stdio.h>

int main() {
    int n, search, flag = 0, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");

    return 0;
}