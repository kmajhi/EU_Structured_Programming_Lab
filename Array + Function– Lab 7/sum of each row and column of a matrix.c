#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int i, j, sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (i + j == ROWS - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of minor diagonal elements: %d\n", sum);

    return 0;
}
