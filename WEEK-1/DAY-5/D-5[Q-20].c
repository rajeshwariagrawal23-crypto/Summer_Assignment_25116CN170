// program to find largest prime factor of a number
#include <stdio.h>
void main()
{
    int i, n, LPF;
    // lpf = largest prime factor
    printf("Enter a positive number:");
    scanf("%d", &n);
    for (i=2; i<=n; i++)
    {
        while(n % i == 0)
        {
            n = n / i;
            LPF = i;
        }
        
    }
    printf("Largest prime factor of %d is: %d", n, LPF);
}