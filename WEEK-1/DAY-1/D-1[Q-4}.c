#include <stdio.h>
int main()
{
    int N, count=0, digit;
    printf("Enter the number N:");
    scanf("%d", &N);
    digit = N;
    while(N != 0)
    {
        N = N/10;
        count ++;
    }
    if(digit == 0)
    {
        count == 1;
    }
    printf("Count of digits in %d are %d", digit, count);
    return 0;

}