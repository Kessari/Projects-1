#include <stdio.h>

#define ROW 3
#define COL 3

void print_matrix(int matrix[][COL], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

    printf("Matrix before removing identical columns:\n");
    print_matrix(matrix, ROW);

    // Loop through each column
    for (int j = 0; j < COL; j++) {
        // Check if column is identical
        int is_identical = 1;
        for (int i = 1; i < ROW; i++) {
            if (matrix[i][j] != matrix[i-1][j]) {
                is_identical = 0;
                break;
            }
        }
        // Remove column if it is identical
        if (is_identical) {
            for (int i = 0; i < ROW; i++) {
                for (int k = j; k < COL-1; k++) {
                    matrix[i][k] = matrix[i][k+1];
                }
                matrix[i][COL-1] = 0;
            }
            COL--;
            j--;
        }
    }

    printf("Matrix after removing identical columns:\n");
    print_matrix(matrix, ROW);

    return 0;
}
