//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

void mergeSortedArrays(int nums1[], int m, int nums2[], int n, int merged[]) {
    int i = 0; // Pointer for nums1
    int j = 0; // Pointer for nums2
    int k = 0; // Pointer for merged array

    // Compare elements from both arrays and copy the smaller one
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy any remaining elements from nums1
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy any remaining elements from nums2
    while (j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    int m, n;

    // Input first sorted array
    printf("Enter size of first array (m): ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter %d sorted integers: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Input second sorted array
    printf("Enter size of second array (n): ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    mergeSortedArrays(nums1, m, nums2, n, merged);

    // Print the merged array separated by spaces
    for (int i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if (i < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
