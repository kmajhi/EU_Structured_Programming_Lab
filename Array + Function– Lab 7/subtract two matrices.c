#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[10][10], b[10][10], diff[10][10];

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // subtract the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // print the difference matrix
    printf("The difference of the two matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
