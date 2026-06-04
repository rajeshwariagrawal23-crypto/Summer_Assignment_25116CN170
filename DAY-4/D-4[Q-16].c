// program to print armstrong numbers between 1 to n
#include <stdio.h>
void main()
{
    int i, n, temp, r, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {         r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d\t ", i);
        }
    }
}