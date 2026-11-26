//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int findRepeatedElement(int nums[], int n) {
    // Lookup array to track seen elements (assuming values are within 0 to 100000)
    int seen[100001] = {0};

    // Single pass through the array
    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i]; // Repeated element found
        }
        seen[nums[i]] = 1;
    }

    return -1; // Fallback if no duplicate exists
}

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeated = findRepeatedElement(nums, n);
    printf("%d\n", repeated);

    return 0;
}
