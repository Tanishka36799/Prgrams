//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    
    // Array to store the last seen index of every ASCII character
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int left = 0; // Start index of the current window

    for (int right = 0; right < n; right++) {
        unsigned char currentChar = s[right];

        // If the character was seen inside the current window, move 'left' past it
        if (lastIndex[currentChar] >= left) {
            left = lastIndex[currentChar] + 1;
        }

        // Update the last seen index of the current character
        lastIndex[currentChar] = right;

        // Calculate current window size and update maxLength
        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    char s[1000];

    // Input string
    printf("Enter a string: ");
    if (scanf("%999s", s) == 1) {
        int result = lengthOfLongestSubstring(s);
        printf("%d\n", result);
    }

    return 0;
}
