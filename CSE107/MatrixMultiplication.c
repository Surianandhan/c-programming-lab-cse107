#include <stdio.h>
#define N 3

int main() {
    int first[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int second[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N] = {0};

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                result[i][j] += first[i][k] * second[k][j];

    printf("Resultant matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}