//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

int main() 
{
    int year;
    int oddDays = 0;
    int i;

    printf("Enter the year: ");
    scanf("%d", &year);

    //Check whether the input year is Leap year or not
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
    {
        // The condition is true if:
        // The year is divisible by 400, OR
        // The year is divisible by 4 but not divisible by 100.
        printf("Leap Year\n");
    } 
    else 
    {
        printf("Not a Leap Year\n");
    }
    return 0;
}
