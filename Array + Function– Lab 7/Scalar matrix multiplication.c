#include <stdio.h>

int main() {
    int m, n, i, j, scalar;
    int matrix[10][10], result[10][10];

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    // perform scalar multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = scalar * matrix[i][j];
        }
    }

    // print the result matrix
    printf("The result of scalar multiplication is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
