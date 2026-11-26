//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int answer[n];
    
    // Step 1: Calculate prefix products and store in answer[]
    // answer[i] will contain the product of all elements to the left of i
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    
    // Step 2: Multiply by suffix products on the fly
    // suffix tracks the product of all elements to the right of i
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
    
    // Print the result in [a,b,c] format
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
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
    
    productExceptSelf(nums, n);
    
    return 0;
}
