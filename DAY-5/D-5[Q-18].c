// program to check strong number
#include <stdio.h>
void main()
{
    int num, temp, digit, sum=0, fact=1;
    printf("Enter the number: ");
    scanf("%d", &temp);
    num = temp;
    while (temp > 0)
    {
        digit = temp % 10;
        for (int i = 1; i <= digit; i++)
       {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is a strong number.", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }

}