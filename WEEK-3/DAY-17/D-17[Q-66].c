// program to union of two arrays
#include <stdio.h>
int main()
{ 
    int a[100], b[100], c[200], n1, n2, i, j, k=0;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of first array: ");
    for(i = 0; i < n1; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of second array: ");
    for(i = 0; i < n2; i++)
    {
        printf("B[%d]= ", i);
        scanf("%d", &b[i]);
    }
    printf("Union of the two arrays is: ");
    for(i = 0; i < n1; i++)
    {
        c[k++] = a[i];
    }
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < n1; j++)
        {
            if(b[i] == a[j])
            {
                break;
            }
        }
        if(j == n1)
        {
            c[k++] = b[i];
        }
    }
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}   