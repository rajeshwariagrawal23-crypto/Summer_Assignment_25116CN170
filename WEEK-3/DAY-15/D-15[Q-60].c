//program to move all zeroes to the end of an array
#include <stdio.h>
int main(void)
{
    int i, j, n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("A[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count < n)
    {
        arr[count++] = 0;
    }
    printf("Array after moving zeroes to the end: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}