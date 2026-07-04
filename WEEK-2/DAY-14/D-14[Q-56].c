// program to find duplicates in array
#include <stdio.h>
int main (void)
{
    int i, j, n, count;

    printf("enter the size of array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }

    printf("The duplicate numbers in the array are:\n");
    for(i=0; i<n; i++)
    {
        if (A[i] == -1)
            continue;
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(A[i] == A[j])
            {
                count++;
                A[j] = -1; /* mark visited duplicate */
            }
        }
        if(count > 1)
        {
            printf("%d ", A[i]);
        }
    }

    printf("\n");
    return 0;
}