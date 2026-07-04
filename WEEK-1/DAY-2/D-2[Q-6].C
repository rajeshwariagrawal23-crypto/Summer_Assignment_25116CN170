#include <stdio.h>
int main()
{
    int N, reverse=0, r=0;
    printf("Enter a number N:");
    scanf("%d", &N);
    while(N>0)
    {
        r = N%10;
        reverse = reverse*10 + r;
        N = N/10;
    }
    printf("The reverse of a number is %d", reverse);
    return 0;
}