//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() 
{
    int num, originalNum, rem, sum = 0;

   
    printf("Enter number: ");
    scanf("%d", &num);
    
    originalNum = num;

    //strong numbers are +ve
    if (num <= 0) 
    {
        printf("Not strong number\n");
        return 0;
    }

    while (num > 0) 
    {
        rem = num % 10; 

        //factorial of the digit
        int fact=1;
        for (int i = 1; i <= rem; i++) 
        {
            fact *= i;
        }

        sum += fact;   
        num /= 10;     
    }

    if (sum == originalNum) 
    {
        printf("Strong number\n");
    } else 
    {
        printf("Not strong number\n");
    }

    return 0;
}
