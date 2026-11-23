#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string

    printf("%s\n", str);
    return 0;
}
