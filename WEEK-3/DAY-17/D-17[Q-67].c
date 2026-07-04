// program to intersection of arrays
#include <stdio.h>
int main()
{
    int n1, n2, i, j, k=0;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int A[n1];
    printf("Enter the elements of the first array:\n");
    for(i=0; i<n1; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int B[n2];
    printf("Enter the elements of the second array:\n");
    for(i=0; i<n2; i++)
    {
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }
    int C[n1<n2?n1:n2];
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(A[i] == B[j])
            {
                C[k++] = A[i];
                break;
            }
        }
    }
    printf("The intersection of the two arrays is:\n");
    for(i=0; i<k; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}