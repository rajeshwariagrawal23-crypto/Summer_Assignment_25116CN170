// program to count even and odd elements 
#include <stdio.h>
int main()
{
    int i, n, A[100], count_even=0, count_odd=0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    for(i=0; i<n; i++)
    {
        if(A[i] % 2 == 0)
        {
            count_even += 1;
        }
        else
        {
            count_odd += 1;
        }
    }

    printf("Number of even elements in array: %d\n", count_even);
    printf("Number of odd elements in array: %d\n", count_odd);

    return 0;
}