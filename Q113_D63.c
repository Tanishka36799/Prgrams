//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort (ascending order)
int compare(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    return (int_a > int_b) - (int_a < int_b);
}

int findKthSmallest(int arr[], int n, int k) {
    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compare);
    
    // Return the kth smallest element (1-based index k -> 0-based index k - 1)
    return arr[k - 1];
}

int main() {
    int n, k;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array must contain at least one element.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid input: k must be between 1 and %d\n", n);
        return 1;
    }

    int result = findKthSmallest(arr, n, k);
    printf("%d\n", result);

    return 0;
}
