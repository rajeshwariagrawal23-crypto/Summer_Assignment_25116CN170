// program to find x^n without using pow() function
#include <stdio.h>
void main()
{
    int x, n, result = 1;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        result *= x;
    }
    printf("%d^%d = %d\n", x, n, result);
}