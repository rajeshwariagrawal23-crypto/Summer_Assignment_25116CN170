// program to remove duplicates from an array
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i] == A[j])
            {
                for(k=j; k<n-1; k++)
                {
                    A[k] = A[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("The array after removing duplicates is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}