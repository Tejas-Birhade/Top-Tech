// 14. Perform 2D matrix array 

#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[ROWS][COLS], const char *name);
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int result[ROWS][COLS];
    
    printf("Input for Matrix 1:\n");
    inputMatrix(matrix1, "Matrix 1");
    
    printf("Input for Matrix 2:\n");
    inputMatrix(matrix2, "Matrix 2");
    
    addMatrices(matrix1, matrix2, result);
    
    printf("\nSum of Matrix 1 and Matrix 2:\n");
    printMatrix(result);
    
    return 0;
}

void inputMatrix(int matrix[ROWS][COLS], const char *name) {
    printf("Enter the elements of %s:\n", name);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
