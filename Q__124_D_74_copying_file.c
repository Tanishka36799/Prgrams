//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
void copy();

int main()
{
    
    FILE *f1;
    f1=fopen("Source.txt", "w");
    fprintf(f1,"Learning C file handling");
    fclose(f1);
    copy();
    return 0;
}
void copy(){
    FILE *f1, *f2;
    char ch;
    f1=fopen("Source.txt", "r");
    f2=fopen("destination.txt", "w");
   
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }
    if(f2!=NULL){
        printf("file copiesd successfully");
    }
    fclose(f1);
    fclose(f2);

}