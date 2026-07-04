//program to rotate array left

#include <stdio.h>
int main (void)
{
    int i, j, n, d, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n;
    for(i = 0; i < d; i++)
    {
        temp = arr[0];
        for(j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}