//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>

void printMaxInWindows(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        printf("Invalid input: k must be between 1 and %d\n", n);
        return;
    }

    // Outer loop moves the starting index of each window of size k
    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];

        // Inner loop finds the maximum element in the current window
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }

        // Print the maximum element followed by a space
        printf("%d", maxVal);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
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

    // Input window size k
    printf("Enter k: ");
    scanf("%d", &k);

    printMaxInWindows(arr, n, k);

    return 0;
}
