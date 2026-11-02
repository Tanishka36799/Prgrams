/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop handles the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop handles the number of stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}
