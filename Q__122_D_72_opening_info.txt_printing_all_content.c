//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main()
{
    FILE *f1;
    f1=fopen("info.txt","r");
    char ch;
    while(1){
        ch=fgetc(f1);
        if(ch==EOF)
        break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(f1);
    
    return 0;
}
