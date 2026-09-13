//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>
int main()
{
    int n, originalNum, remainder, result = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    originalNum = n;
    
    while(n != 0)
    {
        remainder = n % 10;
        if(remainder%2!=0)
        {
        result *= remainder;
        }
        n /= 10;
    }
    printf("Product of each odd digits: %d", result);
    return 0;
}
