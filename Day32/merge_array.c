//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2;
    
    // Read the size of the first array
    if (scanf("%d", &n1) != 1) return 0;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Read the size of the second array
    if (scanf("%d", &n2) != 1) return 0;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Total size for the merged array
    int total_size = n1 + n2;
    int merged[total_size];
    
    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    // Print the merged array
    for (int i = 0; i < total_size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
