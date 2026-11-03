/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() 
{
    // Loop through the 5 distinct blocks of stars
    for (int i = 1; i <= 5; i++) 
    {
        int stars;
        
        // Calculate the number of stars for the current block
        // Block 1 = 1, Block 2 = 3, Block 3 = 5, Block 4 = 3, Block 5 = 1
        if (i <= 3) 
        {
            stars = 2 * i - 1; 
        } 
        else 
        {
            stars = 2 * (6 - i) - 1;
        }

        // Nested loop to print the stars vertically for the current block
        for (int j = 0; j < stars; j++) 
        {
            printf("*\n");
        }

        // Print an empty line separating the blocks (but not after the last block)
        if (i < 5) 
        {
            printf("\n");
        }
    }

    return 0;
}
