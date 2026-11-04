//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[1000];
    
    // Read the string including spaces up until a newline character
    if (scanf("%[^\n]", str) != 1) {
        printf("Vowels=0, Consonants=0\n");
        return 0;
    }
    
    int vowels = 0;
    int consonants = 0;
    int i = 0;
    
    // Loop through the string until the null-terminator is reached
    while (str[i] != '\0') {
        char ch = str[i];
        
        // Check if the character is an alphabet letter
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check for vowels (both lowercase and uppercase)
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                // If it is an alphabet letter but not a vowel, it is a consonant
                consonants++;
            }
        }
        i++;
    }
    
    // Print the final counts in the required format
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    
    return 0;
}
