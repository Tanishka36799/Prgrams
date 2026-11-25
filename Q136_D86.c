//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

int main() {
    char choice[20];
    int num1, num2;
    enum Operation op;

    // Read the operation string and two integers
    scanf("%s %d %d", choice, &num1, &num2);

    // Map the input string to the corresponding enum value
    if (strcmp(choice, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        op = INVALID;
    }

    // Perform the operation using switch
    switch (op) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid Operation\n");
            break;
    }

    return 0;
}
