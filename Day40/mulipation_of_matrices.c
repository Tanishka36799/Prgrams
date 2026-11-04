//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int r1, c1;
    // Read dimensions of the first matrix
    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    
    int mat1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    int r2, c2;
    // Read dimensions of the second matrix
    if (scanf("%d %d", &r2, &c2) != 2) return 0;
    
    int mat2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Matrix multiplication is only possible if c1 == r2
    if (c1 != r2) {
        return 0;
    }
    
    // Result matrix will have dimensions r1 x c2
    int result[r1][c2];
    
    // Perform Matrix Multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize cell
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Print the result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d", result[i][j]);
            if (j < c2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
