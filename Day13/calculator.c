//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>
int main()
{
	char ch;
	int a,b,res=0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Operations: \n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Division\n");
	printf("4.Multiplication\n");
	printf("5.Modulus\n");
	printf("Enter the operation to be performed(1-5): ");
	scanf(" %c", &ch);
	switch(ch)
	{
	case '1':
	{
		res = a+b;
		printf("%d", res);
		break;
	}
	case '2':
	{
		res = a-b;
		printf("%d", res);
		break;
	}
	case '3':
	{
		if(b!=0)
		{
		res = a/b;
		printf("%d", res);
		}
		else 
		{
                printf("Error: Division by zero!\n");
        }
		break;
	}
	case '4':
	{
		res = a*b;
		printf("%d", res);
		break;
	}
	case '5':
	{
		if(b!=0)
		{
		res = a%b;
		printf("%d", res);
		}
		else 
		{
                printf("Error: Division by zero!\n");
        }
		break;
	}
	default:
		printf("Invalid input! Please enter number from (1-5).");
	}
	return 0;
}
