#include <stdio.h>

int main() 
{
    int n;
    double sum = 0.0;

    
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) {
            sum += 1.0;
        } 
        else 
        {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
