// program to input and display an array
#include <stdio.h>
int main()
{
    int i, n, A[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Array elements:\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
    
    return 0;
}