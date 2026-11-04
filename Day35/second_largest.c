//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int n,i;
    printf("Please enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int second = arr[1];
    if (second>max)
    {
        int temp=max;
        max=second;
        second=temp;
    }
    for(i=2; i<n; i++)
    {
        if(arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i] !=max)
        {
            second = arr[i];
        }
    }
    printf("Second Largest = %d\n", second);
    return 0;
    
}
