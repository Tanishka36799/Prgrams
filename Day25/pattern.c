/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop from 5 down to 1 for the starting number of each row
    for (i = 5; i >= 1; i--) {
        // Loop from the starting number 'i' up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
