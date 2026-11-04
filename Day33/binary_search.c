//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, key;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    
    // Read the array elements (assumed to be sorted)
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the element to search for
    if (scanf("%d", &key) != 1) return 0;
    
    int low = 0;
    int high = n - 1;
    int found_index = -1;
    
    // Binary search logic
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential integer overflow
        
        if (arr[mid] == key) {
            found_index = mid;
            break; // Element found, exit loop
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Target is in the right half
        }
        else {
            high = mid - 1; // Target is in the left half
        }
    }
    
    // Print the result
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
