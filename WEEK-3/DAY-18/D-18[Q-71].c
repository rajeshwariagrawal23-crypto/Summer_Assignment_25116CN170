// program to binary search
#include <stdio.h>
int main()
{
    int n, i, key, low, high, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array in sorted order:\n");
    for(i = 0; i < n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(A[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found in the array\n");
    return 0;
}