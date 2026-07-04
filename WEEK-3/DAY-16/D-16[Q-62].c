// program to find maximum frequency element in an array
#include <stdio.h>
int main()
{
    int n, i, j, maxCount = 0, count;
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
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(A[i] == A[j])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxCount = count;
        }
    }
    printf("The maximum frequency of an element in the array is: %d", maxCount);
    printf("\n");
    return 0;
}