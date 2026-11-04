//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];
    
    // Read the string including whitespaces using scanset
    if (scanf("%[^\n]", str) != 1) {

        printf("1\n");
        return 0;
    }
    
    int count = 0;
    // Loop until we hit the null terminator character '\0'
    while (str[count] != '\0') {
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
