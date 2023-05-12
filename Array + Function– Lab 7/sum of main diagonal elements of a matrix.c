#include <stdio.h>

#define ROWS 3
#define COLS 3

void readMatrix(int matrix[][COLS], int rows, int cols);
int sumMainDiagonal(int matrix[][COLS], int rows, int cols);

int main() {
    int matrix[ROWS][COLS];
    int sum;

    printf("Enter the elements of the matrix:\n");
    readMatrix(matrix, ROWS, COLS);

    sum = sumMainDiagonal(matrix, ROWS, COLS);

    printf("Sum of main diagonal elements = %d\n", sum);

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

int sumMainDiagonal(int matrix[][COLS], int rows, int cols) {
    int i, sum = 0;

    for (i = 0; i < rows && i < cols; i++) {
        sum += matrix[i][i];
    }

    return sum;
}
