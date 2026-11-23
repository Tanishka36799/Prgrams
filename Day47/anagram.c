#include <stdio.h>
#include <string.h>

int main() {
    char s1, s2;
    int freq = {0};

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
