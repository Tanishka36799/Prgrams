//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter number of odd terms to be added: ");
    scanf("%d", &a);
    if(a<=0)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        for(int i=1; i<=a; i++)
        {
            sum+= (2*i)-1;
            
        }
        printf("%d", sum);
    }
    return 0;
}
