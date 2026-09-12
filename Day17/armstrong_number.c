//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main()
{
    int n, originalNum, remainder, result = 0;
    
    printf("Enter a 3-digit no.: ");
    scanf("%d", &n);
    originalNum = n;
    
    while(n != 0)
    {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }
    if (result == originalNum) 
    {
        printf("%d is an Armstrong number.\n", originalNum);
    } else 
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    
    return 0;
}
