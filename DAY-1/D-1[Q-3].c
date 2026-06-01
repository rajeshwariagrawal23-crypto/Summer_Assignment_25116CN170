#include <stdio.h>
int main()
{
    int i, N, fact=1;
    printf("Enter a number N:");
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is equal to %d",N,fact);
}