#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

void printPerfectNumbers(int matrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (isPerfect(matrix[i][j])) {
                printf("%d is a perfect number at position (%d, %d)\n", matrix[i][j], i, j);
            }
        }
    }
}

int main() {
    int matrix[3][100] = {{6, 8, 10}, {28, 7, 9}, {12, 14, 16}};
    int rows = 3, columns = 3;
    
    printPerfectNumbers(matrix, rows, columns);
    
    return 0;
}
