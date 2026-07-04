// program to print factors of a number
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a positive number: ");
    scanf("%d", &n);
    printf("factors of %d are: ", n);
    for(i=1; i<=n; i++)
   {
        if (n % i == 0)
    {
            printf("%d\t", i);
       }
   }
}