//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    // Edge case: if k is larger than the array size or invalid
    if (n < k || k <= 0) {
        return -1;
    }

    // Step 1: Compute the sum of the first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window from index k to n - 1
    // Add the new element entering the window and subtract the element leaving it
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    int n, k;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input subarray size k
    printf("Enter k: ");
    scanf("%d", &k);

    int result = maxSubarraySum(arr, n, k);
    if (result == -1 && (n < k || k <= 0)) {
        printf("Invalid input: k must be between 1 and %d\n", n);
    } else {
        printf("%d\n", result);
    }

    return 0;
}
