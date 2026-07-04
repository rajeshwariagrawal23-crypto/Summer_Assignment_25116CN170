// program to find pair with given sum in an array
#include <stdio.h>
int main()
{
    int n, i, j, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Enter the sum to find pairs: ");
    scanf("%d", &sum);
    printf("The pairs with sum %d are:\n", sum);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i] + A[j] == sum)
            {
                printf("(%d, %d)\n", A[i], A[j]);
            }
        }
    }
    return 0;

}