#include <stdio.h>

#define ROWS 3
#define COLS 3

void readMatrix(int matrix[][COLS], int rows, int cols);
int isEqual(int matrix1[][COLS], int matrix2[][COLS], int rows, int cols);

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
    int i, j, equal;

    printf("Enter elements of first matrix:\n");
    readMatrix(matrix1, ROWS, COLS);

    printf("Enter elements of second matrix:\n");
    readMatrix(matrix2, ROWS, COLS);

    equal = isEqual(matrix1, matrix2, ROWS, COLS);

    if (equal) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}

void readMatrix(int matrix[][COLS], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isEqual(int matrix1[][COLS], int matrix2[][COLS], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0;
            }
        }
    }

    return 1;
}
