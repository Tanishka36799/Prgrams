//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    INVALID
};

int main() {
    char input[20];
    enum UserRole role;

    // Read the role string from user input
    scanf("%s", input);

    // Map the string input to the corresponding enum value
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        role = INVALID;
    }

    // Display message based on the enum value
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role!\n");
            break;
    }

    return 0;
}
