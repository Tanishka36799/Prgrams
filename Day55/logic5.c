#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Pass 1: Find candidate
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Pass 2: Verify candidate
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
