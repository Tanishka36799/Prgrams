#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long totalSum = n * (n + 1) / 2;
    long long x = (long long)sqrt(totalSum);

    if (x * x == totalSum) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
