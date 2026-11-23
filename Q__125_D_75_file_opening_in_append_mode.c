//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    FILE *f1;
    char buffer[256];

    f1 = fopen("data.txt", "a");
    if (f1 == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        fprintf(f1, "%s", buffer);
    }


    fclose(f1);

    printf("File updated successfully with appended text.\n");

    return 0;
}
