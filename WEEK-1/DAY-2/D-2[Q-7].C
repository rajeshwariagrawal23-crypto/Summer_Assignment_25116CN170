#include <stdio.h>
int main()
{
    int N, product=1, r;
    printf("Enter a number N:");
    scanf("%d", &N);
    while(N>0)
    {
        r = N%10;
        product *= r;
        N = N/10;
    }
    printf("The product of digits of a number is %d", product);
    return 0;
}