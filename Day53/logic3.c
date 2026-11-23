#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int nums[n];
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}
