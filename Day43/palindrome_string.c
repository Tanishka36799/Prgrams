/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int start = 0,end , ispalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    end = strlen(str) - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            ispalindrome = 0; 
            break;
        }
        start++;
        end--;
    }

    if (ispalindrome) 
    {
        printf("\"%s\" is a palindrome.\n", str);
    } 
    else 
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
