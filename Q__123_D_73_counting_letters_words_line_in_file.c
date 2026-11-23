//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main()
{
    FILE *f1;
    f1=fopen("Text", "r");
    char ch;
    int letter=0,word=2,line=1;
    while(1){
        ch=fgetc(f1);
        if(ch==EOF){
            break;
        }
        else {
            letter++;
        }
        if(ch==' '){
            word++;
        }
        if(ch=='\n'){
            line++;
        }
    }
    printf("Number of letters is %d\n", letter);
    printf("Number of words is %d\n", word);
    printf("Number of lines is %d\n", line);
    

    return 0;
}
