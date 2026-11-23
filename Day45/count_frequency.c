#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], target;
    int count = 0;

    // Read the string (use fgets if strings can contain spaces)
    fgets(str, sizeof(str), stdin);
    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Read the target character (space before %c skips leftover whitespace/newlines)
    scanf(" %c", &target);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

