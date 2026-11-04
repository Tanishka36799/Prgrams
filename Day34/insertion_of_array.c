//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
    int i,n,num,pos,arr[10];
    printf("Enter the nmber of elements: ");
    scanf("%d", &n);
    printf("Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position at which number to be inserted: ");
    scanf("%d", &pos);
    for(i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = num;
    n++;
    printf("The array post insertion %d :", num);
    for(i=0; i<n; i++)
    {
        printf("\t%d", arr[i]);
        
    }
    return 0;
}
