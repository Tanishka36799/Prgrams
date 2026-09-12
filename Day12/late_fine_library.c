/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>
int main()
{
    int nod,fine=0;
    printf("Enter number of days the book was borrowed: ");
    scanf("%d", &nod);
    if(nod<0)
    {
        printf("Please enter a positive number.");
    }
    else if(nod==0)
    {
        printf("You can return the book without worrying about late fine.");
    }
    else
    {
        if(nod<=5)
        {
            fine = nod*2;
            printf("Fine: ₹%d", fine);
        }
        else if(nod<=10)
        {
            fine = (5*2)+(nod-5)*4;
            printf("Fine: ₹%d", fine);
        }
        else if(nod<=20)
        {
            fine = (5*2)+(5*4)+(nod-10)*6;
            printf("Fine: ₹%d", fine);
        }
        else
        {
            printf("Membership Cancelled");
        }
    }
    return 0;
}
