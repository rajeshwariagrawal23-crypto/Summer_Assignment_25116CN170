// program to linear search 
#include <stdio.h>
int main()
{
    int i, n, A[n], key, found=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array element:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(A[i] == key)
        {
            printf("The element is found at position %d\n", A[i]);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Element not found.");
    }

    return 0;
}