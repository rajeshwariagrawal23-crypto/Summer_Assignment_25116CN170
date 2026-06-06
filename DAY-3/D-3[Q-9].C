#include <stdio.h>
int main()
{
    int i, N, count;
    printf("Enter the number:");
    scanf("%d", &N);
    if(N==0 || N==1)
    {
        printf("%d is not a prime number", N);
        return 0;
    }
    for(i=2; i<=N/2; i++)
    {
        count=0;
        if(N%i == 0)
        {
            count ++;
            break;
        }
    }
    if(count == 0)
    {
        printf("%d is a prime number", N);
    }
    else
    {
        printf("%d is not a prime number", N);
    }
    return 0;
}