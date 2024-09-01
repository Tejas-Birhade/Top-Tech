//  WAP to make addition, Subtraction and multiplication of two matrix using 
// 2-D Array 

#include <stdio.h>

#define MAX 10

// Function prototypes
void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void printMatrix(int matrix[MAX][MAX], int rows, int cols);
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int cols2);

int main() {
    int rows1, cols1, rows2, cols2;
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices must have the same dimensions for addition and subtraction.\n");
        return 1;
    }
    
    printf("Enter elements of the first matrix:\n");
    inputMatrix(mat1, rows1, cols1);
    
    printf("Enter elements of the second matrix:\n");
    inputMatrix(mat2, rows2, cols2);
    
    printf("Matrix after addition:\n");
    addMatrices(mat1, mat2, result, rows1, cols1);
    printMatrix(result, rows1, cols1);
    
    printf("Matrix after subtraction:\n");
    subtractMatrices(mat1, mat2, result, rows1, cols1);
    printMatrix(result, rows1, cols1);
    
    if (cols1 != rows2) {
        printf("Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n");
        return 1;
    }
    
    printf("Matrix after multiplication:\n");
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
    printMatrix(result, rows1, cols2);
    
}

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
