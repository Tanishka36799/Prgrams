
//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/#include <stdio.h>

int main() {
    char str[100];
    
    // Read the string including spaces up until a newline character
    if (scanf("%[^\n]", str) != 1) {
        return 0;
    }
    
    int i = 0;
    // Loop through the string until the null-terminator is reached
    while (str[i] != '\0') {
        // If the character is lowercase, convert it to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // The difference between 'a' and 'A' is 32 in ASCII
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    // Print the modified uppercase string
    printf("%s\n", str);
    
    return 0;
}
