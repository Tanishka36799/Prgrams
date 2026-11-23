//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h> 

int main() {
    FILE *f1;
    int ch;
    int vowels = 0;
    int consonants = 0;

    f1 = fopen("text.txt", "r");
    if (f1 == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) {
        char lower_ch = tolower(ch);

        if (isalpha(lower_ch)) {
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }


    fclose(f1);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
