// program to find largest and smallest element
#include <stdio.h>
int main()
{
    int i, n, A[100], largest, smallest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    largest = smallest = A[0];
    for(i=0; i<n; i++)
    {
        if(A[i] > largest)
        {
            largest = A[i];
        }
        if(A[i] < smallest)
        {
            smallest = A[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
}