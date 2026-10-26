//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() 
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<=0)
    {
        return 1;
    }
    
   //perfect number should be +ve
    if (num > 0) 
    {
        //find proper divisors and sum upto n/2
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
    }
    

    // check if the sum of divisors equals the original number
    if (sum == num && num > 0) 
    {
        printf("Perfect number\n");
    } 
    else 
    {
        printf("Not perfect number\n");
    }
    

    return 0;
}
