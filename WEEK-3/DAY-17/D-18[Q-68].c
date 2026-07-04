// program to find common elements in two arrays
#include <stdio.h>
int main()
{
    int A[100], B[100], C[100], n1, n2, i, j, k=0;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of first array: ");
    for(i = 0; i < n1; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of second array: ");
    for(i = 0; i < n2; i++)
    {
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }
    printf("Common elements in the two arrays are: ");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {  
            if(A[i] == B[j])
            {
                C[k++] = A[i];
                break;
            }
        }
    }
    for(i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }
    return 0;
}