//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    LIGHT_COUNT // Helper constant to track the total number of items
};

int main() {
    // Array of strings matching the enum order
    const char *lightNames[] = {"RED", "YELLOW", "GREEN"};

    // Loop through the enum values from 0 to LIGHT_COUNT - 1
    for (int i = RED; i < LIGHT_COUNT; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }

    return 0;
}
