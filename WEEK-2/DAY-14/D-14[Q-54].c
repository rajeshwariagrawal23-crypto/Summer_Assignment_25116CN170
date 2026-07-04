// program to frequency of an element
#include <stdio.h>
int main(void)
{
    int i, n, key, count=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the element of array:\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &key);

    for (i=0; i<n; i++)
    {
        if(A[i] == key)
        {
            count ++;
        }
    }

    printf("The frequency of %d is %d\n", key, count);
}
