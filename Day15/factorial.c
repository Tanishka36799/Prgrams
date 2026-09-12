//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Factorial doesnt exist for negative numbers");
    }
    else if(n==0)
    {
        printf("Factorial: 1");
    }
    else
    {
        for(int i=1; i<=n; ++i)
        {
            fact*=i;
        }
        printf("Factorial = %d\n",fact);
        return 0;
    }
    
}
