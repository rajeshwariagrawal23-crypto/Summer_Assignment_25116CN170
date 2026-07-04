//program to second largest element in an array
#include<stdio.h>
int main(void)
{
    int i, n, largest, second_largest;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements of array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }

    largest = second_largest = A[0];

    for(i=0; i<n; i++)
    {
        if (A[i] > largest)
        {
            second_largest = largest;
            largest = A[i];
        }
        else if (A[i] > second_largest && A[i] != largest)
        {
            second_largest = A[i];
        }
    }

    printf("The second largest element is %d\n", second_largest);
}