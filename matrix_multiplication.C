//Matrix Multiplication:- Multiplies two matrices entered by the user
#include <stdio.h>

void inputMatrix(int matrix[][10], int row, int col) {
    printf("Enter elements for a %dx%d matrix:\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // Initialize result matrix with zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input size of the first matrix
    printf("Enter rows and columns for the first matrix:\n ");
    scanf("%d %d", &r1, &c1);

    // Input size of the second matrix
    printf("Enter rows and columns for the second matrix:\n ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Input elements of the first and second matrices
    printf("Enter elements of the first matrix:\n");
    inputMatrix(firstMatrix, r1, c1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(secondMatrix, r2, c2);

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, r1, c1, r2, c2);

    // Display the result
    printf("Result of matrix multiplication:\n");
    displayMatrix(result, r1, c2);

    return 0;
}
