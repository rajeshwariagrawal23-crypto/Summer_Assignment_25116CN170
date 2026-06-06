// program to check armstrong number 
#include <stdio.h>
void main()
{
    int n, temp, sum=0, r;
    printf("Enter the number:");
    scanf("%d", &n);
    temp = n;
    // loop to calculate the sum of cubes of digits
    while(temp != 0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    // check if the number is an armstrong number
    if(sum == n)
    {
        printf("%d is an armstrong number", n);
    }
    else
    {
        printf("%d is not an armstrong number", n);
    }
}