//program to print all prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int start, end, i, j, count;
    printf("Enter the starting number:");
    scanf("%d", &start);
    printf("Enter the ending number:");
    scanf("%d", &end);
    for(i=start; i<=end; i++)
    {
        count=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                count = 1;
            }
        }
        if(count==0 && i!=1 && i!=0)
        {
            printf("%d\n ", i);
        }
    }
    return 0;
}