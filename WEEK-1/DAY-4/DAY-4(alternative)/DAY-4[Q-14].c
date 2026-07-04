// program to find the nth term of the Fibonacci series
#include <stdio.h>
void main()
{
    int i, n, a=0, b=1, c, temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        temp=n;
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth term of the Fibonacci series is: %d", n, temp);
}
