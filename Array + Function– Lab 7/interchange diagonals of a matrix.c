#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int i, j, temp;

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

    // Interchange the diagonals of the matrix
    for (i = 0; i < ROWS; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][ROWS - 1 - i];
        matrix[i][ROWS - 1 - i] = temp;
    }

    printf("The matrix after interchanging diagonals is:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
