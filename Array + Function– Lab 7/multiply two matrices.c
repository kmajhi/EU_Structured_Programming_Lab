#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Error: The number of columns in matrix 1 must be equal to the number of rows in matrix 2\n");
        return 1;
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // perform matrix multiplication
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print the result matrix
    printf("The product of the two matrices is:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
