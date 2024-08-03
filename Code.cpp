#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transposed[cols][rows]) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    
    // Read the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    int transposed[cols][rows];
    
    // Read the matrix
    readMatrix(rows, cols, matrix);
    
    // Calculate the transpose
    transposeMatrix(rows, cols, matrix, transposed);
    
    // Print the transposed matrix
    printf("Transposed matrix:\n");
    printMatrix(cols, rows, transposed);
    
    return 0;
}
