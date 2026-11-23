//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic


*/
#include <stdio.h>

void print();

int main()
{
    FILE *f1;
    char ch[50];
    
    f1 = fopen("String", "w");
    if (f1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    
    if (fgets(ch, sizeof(ch), stdin) != NULL) {
        fprintf(f1, "%s", ch);
    }
    
    fclose(f1); 
    print();

    return 0;
}

void print() {
    FILE *f1;
    char ch;
    
    f1 = fopen("String", "r");
    if (f1 == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }
    
    while (1) {
        ch = fgetc(f1);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    
    printf("\n");
    fclose(f1);
}

