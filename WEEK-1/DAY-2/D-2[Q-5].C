#include <stdio.h>
int main()
{
    int N, sum=0, r;
    printf("Enter a number:");
    scanf("%d", &N);
    while(N>0)
    {
        r = N%10;
        sum += r;
        N = N/10;
    } 
printf("THe summ of digits of a number = %d", sum);
    return 0;
}