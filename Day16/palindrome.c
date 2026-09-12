//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) 
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if original number is equal to reversed number
    if (originalNum == reversedNum) 
    {
        printf("%d is a palindrome.\n", originalNum);
    } else 
    {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
