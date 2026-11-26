//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int findMissingNumber(int nums[], int n) {
    // Expected sum of integers from 0 to n: n * (n + 1) / 2
    long long expectedSum = (long long)n * (n + 1) / 2;
    
    // Actual sum of elements present in the array
    long long actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    
    // The difference gives the missing number
    return (int)(expectedSum - actualSum);
}

int main() {
    int n;

    // Input array size
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int nums[n];

    // Input n integers between 0 and n (with one missing)
    printf("Enter %d integers between 0 and %d: ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int missing = findMissingNumber(nums, n);
    printf("%d\n", missing);

    return 0;
}
