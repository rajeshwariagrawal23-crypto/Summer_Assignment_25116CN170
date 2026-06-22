// program to find sum and average of an array
#include <stdio.h>
int main()
{
    int i, n, A[100], sum=0;
    float avg;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
        sum += A[i];
    }
    avg = (float)sum / n;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", avg);
}