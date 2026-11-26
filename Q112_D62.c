//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    // Initialize both maxSoFar and currentMax with the first element
    // This naturally handles arrays where all elements are negative
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        // Decide whether to extend the existing subarray or start a new one at arr[i]
        if (currentMax + arr[i] > arr[i]) {
            currentMax = currentMax + arr[i];
        } else {
            currentMax = arr[i];
        }

        // Update the global maximum if the current subarray sum is greater
        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    return maxSoFar;
}

int main() {
    int n;

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

    int result = maxSubarraySum(arr, n);
    printf("%d\n", result);

    return 0;
}
