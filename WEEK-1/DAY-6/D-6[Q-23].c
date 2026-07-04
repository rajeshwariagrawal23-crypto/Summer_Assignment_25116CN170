// program to count set bits in a number
#include <stdio.h>
int main(void)
{
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
            num = num >> 1;
        }
        else
        {
            num = num >> 1;
        }
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}