// program to selection sort
#include <stdio.h>
int main()
{
    int n, i, j, min_index, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {   
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        min_index = i;
        for(j = i+1; j < n; j++)
        {
            if(A[j] < A[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            temp = A[i];
            A[i] = A[min_index];
            A[min_index] = temp;
        }
    }
    printf("The sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}