// program to merge two arrays 
#include <stdio.h>
int main()
{
    int i, j, A[100], B[100], C[100],n1, n2;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array:\n");
    for(i=0; i<n1; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array:\n");
    for(i=0; i<n2; i++)
    {
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }
    // merging two arrays
    for(i=0; i<n1; i++)
    {
        C[i] = A[i];
    }
    for(i=0; i<n2; i++)
    {
        C[(n1+i)] = B[i];
    }
    printf("The merged array is:\n");
    for(i=0; i<(n1+n2); i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
