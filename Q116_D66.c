//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    // Check every unique pair of indices (i, j) where i < j
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }

    // Print "-1 -1" if no valid pair is found
    printf("-1 -1\n");
}

int main() {
    int n, target;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target sum
    printf("Enter target: ");
    scanf("%d", &target);

    twoSum(nums, n, target);

    return 0;
}
