#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name;
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c.", toupper((unsigned char)name[i]));
        }
    }
    printf("\n");

    return 0;
}
