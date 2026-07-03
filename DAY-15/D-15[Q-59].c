// program to rotate array right
#include <stdio.h>
int main(void)
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
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n;
    for(i = 0; i < d; i++)
    {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("Array after rotation: ");  
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}