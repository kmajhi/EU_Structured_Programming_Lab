#include <stdio.h>

#define ROWS 3
#define COLS 3

void readMatrix(int matrix[][COLS], int rows, int cols);
int sumMinorDiagonal(int matrix[][COLS], int rows, int cols);

int main() {
    int matrix[ROWS][COLS];
    int sum;

    printf("Enter the elements of the matrix:\n");
    readMatrix(matrix, ROWS, COLS);

    sum = sumMinorDiagonal(matrix, ROWS, COLS);

    printf("Sum of minor diagonal elements = %d\n", sum);

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

int sumMinorDiagonal(int matrix[][COLS], int rows, int cols) {
    int i, j, sum = 0;

    for (i = 0, j = cols - 1; i < rows && j >= 0; i++, j--) {
        sum += matrix[i][j];
    }

    return sum;
}
