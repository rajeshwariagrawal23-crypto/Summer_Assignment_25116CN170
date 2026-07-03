// program to reverse array
#include <stdio.h>
int main (void)
{
    int i, n, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }

    for(i=0; i<n/2; i++)
    {
        temp = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = temp;
    }

    printf("The reversed array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
}