//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d=0,root1=0,root2;
    printf("Enter the coefficents of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0)
    {
        printf("Invalid input: coefficient of x^2 cannot be zero.\n");
    }
    else
    {
        d = (b*b)-4.0*a*c;
        root1= (-b+sqrt(d))/2*a;
        root2 = (-b-sqrt(d))/2*a;
        if(d>0)
        {
            printf("Roots are Real and Distinct: %.2f,%.2f",root1, root2);
        }
        else if(d<0)
        {
            printf("Roots are Complex/Imaginary: %.2f,%.2f", root1, root2);
        }
        else
        {
            printf("Roots are Real and Equal: %.2f,%.2f", root1, root2);
        }
    }
    return 0;
    
}
