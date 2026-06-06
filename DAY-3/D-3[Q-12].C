#include <stdio.h>
int main()
{
    int i, a, b, GCD, LCM;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            GCD = i;
        }
    }
    LCM = (a*b)/GCD;
    printf("The LCM of %d and %d is %d", a, b, LCM);
    return 0;
}