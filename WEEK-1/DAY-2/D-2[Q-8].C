#include <stdio.h>
int main()
{
    int N, number, reverse=0, r;
    printf("Enter a number N:");
    scanf("%d", &N);
    number = N;
    while(N>0)
    {
        r = N%10;
        reverse = reverse*10 + r;
        N = N/10;
    }
    if(number == reverse)
    {
        printf("%d is a palindrome number", number);
    }
    else
    {
        printf("%d is not a palindrome number", number);
    }
    return 0;
}