//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{
    int cp, sp, pp = 0, lp = 0, loss = 0, profit = 0;
    
    printf("Enter cost price: ");
    scanf("%d", &cp);
    
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if (cp > sp)
    {
        loss = cp - sp;
        lp = (loss * 100) / cp; 
        printf("Loss: %d%%\n", lp); 
    }
    else if (sp > cp)
    {
        profit = sp - cp;
        pp = (profit * 100) / cp; 
        printf("Profit: %d%%\n", pp); 
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
