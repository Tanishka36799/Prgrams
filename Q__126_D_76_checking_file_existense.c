//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
void file(){
    FILE *f1;
    f1=fopen("Happy.txt", "w");
    fprintf(f1,"Hehehehe");
}
int main()
{
    file();
    char filename[100];
    FILE *f1;
    int ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    f1 = fopen(filename, "r");

    if (f1 == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    else{

    printf("File opened successfully.\n");
    
    while(1){
        ch=fgetc(f1);
        if(ch==EOF)
        break;
        printf("%c", ch);
    }
    }
    printf("\n");

    fclose(f1);

    return 0;
}
