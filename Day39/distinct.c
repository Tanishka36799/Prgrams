//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) != 2) return 0;
    
    int matrix[rows][cols];
    
    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // The main diagonal elements are where row index == column index (i == j)
    int diag_size = (rows < cols) ? rows : cols;
    
    int is_distinct = 1; // 1 represents True, 0 represents False
    
    // Compare each diagonal element with all subsequent diagonal elements
    for (int i = 0; i < diag_size; i++) {
        for (int j = i + 1; j < diag_size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = 0; // Found a duplicate element, set flag to False
                break;
            }
        }
        if (is_distinct == 0) {
            break;
        }
    }
    
    // Print the result based on the integer flag
    if (is_distinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
