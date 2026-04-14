#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
}

void printMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int a[][cols], int b[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void multiplyMatrices(int r1, int c1, int a[][c1], int r2, int c2, int b[][c2], int result[][c2]) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    inputMatrix(r1, c1, mat1);

    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    inputMatrix(r2, c2, mat2);

    if (r1 == r2 && c1 == c2) {
        int sum[r1][c1];
        addMatrices(r1, c1, mat1, mat2, sum);
        printf("\nMatrix Addition:\n");
        printMatrix(r1, c1, sum);
    } else {
        printf("\nAddition not possible\n");
    }

    if (c1 == r2) {
        int product[r1][c2];
        multiplyMatrices(r1, c1, mat1, r2, c2, mat2, product);
        printf("\nMatrix Multiplication:\n");
        printMatrix(r1, c2, product);
    } else {
        printf("\nMultiplication not possible\n");
    }

    return 0;
}