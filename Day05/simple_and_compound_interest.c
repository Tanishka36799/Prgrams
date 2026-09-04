//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
int main()
{
    int p,r,t;
    float si=0,ci=0,amt=0;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    if(p<=0)
    {
        printf("Please enter a valid positive amount.");
    }
    else
    {
        printf("Enter rate of interest: ");
        scanf("%d", &r);
        printf("Enter time period: ");
        scanf("%d", &t);
        if(t<=0)
        {
            printf("Please enter a valid positive time period.");
        }
        else
        {
            si = (p*r*t)/100.0;
            
            amt=p;
            for(int i=1; i<=t; i++)
            {
            amt = amt*(1+(r/100.0));
            }
            ci = amt-p;
            printf("Simple Interest= %.1f, Compound Interest= %.2f", si, ci);
            return 0;
        }
    }
}
