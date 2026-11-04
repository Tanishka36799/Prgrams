/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, key;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find: ");
    if (scanf("%d", &key) != 1) return 0;
    
    int found_index = -1;
    
    // Linear search logic
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found_index = i;
            break; // Stop searching once the element is found
        }
    }
    
    // Print the result based on whether the key was found
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
