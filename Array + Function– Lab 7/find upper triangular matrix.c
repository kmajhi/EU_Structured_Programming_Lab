#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The original matrix is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The upper triangular matrix is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (i > j) {
                printf("0 ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
