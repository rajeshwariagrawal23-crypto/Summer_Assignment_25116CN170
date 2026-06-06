//program to find the GCD of two numbers
#include <stdio.h>
int main()
{
    int i, a, b, GCD;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    for(i=1; i<=a; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            GCD = i;
        }
    }
    printf("The GCD of %d and %d is %d", a, b, GCD);
    return 0;
}