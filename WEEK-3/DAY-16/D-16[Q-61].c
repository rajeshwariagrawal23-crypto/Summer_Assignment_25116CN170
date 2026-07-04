// program to find missing number in an array
#include <stdio.h>
int main()
{
    int n, i, sum=0, total;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n-1; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
        sum += A[i];
    }
    total = n * (n + 1) / 2;
    printf("The missing number is: %d", total - sum);
    printf("\n");
    return 0;
}