// program to check the given number is armstrong number or not
#include <stdio.h>
void main()
{
    int n, temp, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {  
        i = temp % 10;
        sum = sum + (i * i * i);
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
}

