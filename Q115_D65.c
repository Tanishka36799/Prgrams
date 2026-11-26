//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    // If lengths differ, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    // Frequency array for 26 lowercase English letters
    int count = {0};

    // Increment count for characters in s, decrement for characters in t
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // If all counts return to 0, both strings have identical character frequencies
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s, t;

    // Input two strings
    printf("Enter first string: ");
    scanf("%999s", s);

    printf("Enter second string: ");
    scanf("%999s", t);

    if (isAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
