//program to print the Fibonacci series up to n terms
#include <stdio.h>
void main()
{
    int i, n, a=0, b=1, c;
    printf("enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", a);
        c=a+b;
        a=b;
        b=c;
    }
}