//: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/


#include <stdio.h>
int main()
{
    int a,prod=1;
    printf("Enter number of odd terms to be multiplied: ");
    scanf("%d", &a);
    if(a<=0)
    {
        printf("Please enter a positive number.");
    }
    else if(a<2)
    {
        printf("No even numbers found! Please enter a number greater than 2.");
    }
    else
    {
        for(int i=2; i<=a; i+=2)
        {
            prod*= i;
            
        }
        printf("%d", prod);
    }
    return 0;
}
