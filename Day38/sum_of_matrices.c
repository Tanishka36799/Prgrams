//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int rows1, cols1;
    
    // Read dimensions of the first matrix
    if (scanf("%d %d", &rows1, &cols1) != 2) return 0;
    
    int mat1[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    int rows2, cols2;
    // Read dimensions of the second matrix
    if (scanf("%d %d", &rows2, &cols2) != 2) return 0;
    
    int mat2[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Matrix addition is only possible if dimensions match
    if (rows1 != rows2 || cols1 != cols2) {
        return 0;
    }
    
    // Add the matrices and print the result directly
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d", mat1[i][j] + mat2[i][j]);
            
            if (j < cols1 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
