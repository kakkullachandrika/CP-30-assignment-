#include <stdio.h>
void printMatrix(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void setZeroes(int matrix[][4], int rows, int cols) {
    int row[rows];
    int col[cols];
    for (int i = 0; i < rows; i++) {
        row[i] = 0;
    }
    for (int j = 0; j < cols; j++) {
        col[j] = 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1; 
                col[j] = 1; 
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        if (row[i] == 1) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < cols; j++) {
        if (col[j] == 1) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
 {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 0, 7, 8},
        {9, 10, 0, 1}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix, 3, 4);
    setZeroes(matrix, 3, 4);

    printf("\nModified Matrix:\n");
    printMatrix(matrix, 3, 4);

    return 0;
}
