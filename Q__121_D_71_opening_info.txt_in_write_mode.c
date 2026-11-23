//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main()
{
    FILE *f1;
    f1=fopen("info.txt","w");
    char ch[50];
    int age;
    if(fgets(ch, 50, stdin)!=NULL){
        fprintf(f1, "%s", ch);
    }
    scanf("%d", &age);
    fprintf(f1, "%d", age);
    if(f1!=NULL){
        printf("File created successfully");
    }

    return 0;
}
