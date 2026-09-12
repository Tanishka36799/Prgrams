//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>
int main()
{
	int a;
	printf("Enter number of digits to be printed: ");
	scanf("%d", &a);
	if(a<=0)
	{
		printf("Please enter a valid positive number.");
	}
	else
	{
		for(int i=1; i<=a; i++)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
