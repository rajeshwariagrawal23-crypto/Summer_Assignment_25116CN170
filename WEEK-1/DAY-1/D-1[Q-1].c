#include <stdio.h>
void main()
{
    int i, N, sum=0;
    printf("enter the element N");
    scanf("%d", &N);
    for(i=0;i<=N;i++)
    {
        sum += i; 
    }
    printf("the sum of first %d natural numbers is = %d ", N, sum);
}
