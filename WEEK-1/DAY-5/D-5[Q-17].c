// program to check perfect number
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    for (i=1; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n && n > 1)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
}