#include <stdio.h>

int main() {
    int matrix_A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix_B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int rows_A = 2, cols_A = 3;
    int rows_B = 3, cols_B = 2;

    if (cols_A != rows_B) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    } else {
        int result_matrix[2][2] = {{0}};

        for (int i = 0; i < rows_A; i++) {
            for (int j = 0; j < cols_B; j++) {
                for (int k = 0; k < cols_A; k++) {
                    result_matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
                }
            }
        }

        printf("Product of the matrices:\n");
        for (int i = 0; i < rows_A; i++) {
            for (int j = 0; j < cols_B; j++) {
                printf("%d\t", result_matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
