//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char str[1000];
    
    // Read the string including spaces up until a newline character
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }
    
    int i = 0;
    // Loop through the string until the null-terminator is reached
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
    
    return 0;
}
