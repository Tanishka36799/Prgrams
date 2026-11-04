//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) != 2) return 0;
    
    int matrix[rows][cols];
    int row_sums[rows]; // Array to store the sum of each row
    
    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of each row
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        row_sums[i] = sum; // Store the total sum in the array
    }
    
    // Print the row sums separated by space
    for (int i = 0; i < rows; i++) {
        printf("%d", row_sums[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
