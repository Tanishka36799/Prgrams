//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>
int main()
{
    int n, originalNum, remainder, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    originalNum = n;
    
    while(n != 0)
    {
        remainder = n % 10;
        result += remainder;
        n /= 10;
    }
    printf("Sum of each digits: %d", result);
    return 0;
}
