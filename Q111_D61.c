//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

void printFirstNegativeInWindows(int arr[], int n, int k) {
    if (n < k || k <= 0) {
        printf("Invalid input: k must be between 1 and %d\n", n);
        return;
    }

    // Outer loop moves the starting index of each window of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;

        // Inner loop scans the current window from left to right
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break; // Stop at the first negative integer found
            }
        }

        // Print the result separated by spaces
        printf("%d", firstNeg);
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

    printFirstNegativeInWindows(arr, n, k);

    return 0;
}
