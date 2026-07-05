// program to sort array in descending order
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("Array sorted in descending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("A[%d]= %d\n", i, A[i]);
    }

    printf("\n");
    return 0;
}