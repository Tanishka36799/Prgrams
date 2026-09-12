/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main()
{
    int nou,bill=0;
    printf("Enter number of units used: ");
    scanf("%d", &nou);
    if(nou<0)
    {
        printf("Please enter a positive number.");
    }
    else if(nou==0)
    {
        printf("No bill.");
    }
    else
    {
        if(nou<=100)
        {
            bill = nou*5;
            printf("Bill: ₹%d", bill);
        }
        else if(nou<=200)
        {
            bill = (100*5)+(nou-100)*7;
            printf("Bill: ₹%d", bill);
        }
        else if(nou<=300)
        {
            bill = (100*5)+(100*7)+(nou-200)*10;
            printf("Bill: ₹%d", bill);
        }
        else
        {
            bill = (100*5)+(100*7)+(100*10)+(nou-300)*12;
            printf("Bill: ₹%d", bill);
        }
    }
    return 0;
}
