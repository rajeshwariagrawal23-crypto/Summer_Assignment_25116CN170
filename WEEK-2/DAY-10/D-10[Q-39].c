// program to print number pyramid(pascal pyramid)
#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Enter a number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n-i); j++)
        {
            printf("\t");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d\t", k);
        }
        for(k=(i-1); k>=1; k--)
        {
            printf("%d\t", k);
        }
        printf("\n");
    }
}