// program to recursive sum of digits of a number
#include <stdio.h>
// Function to calculate sum of digits using recursion
int sumOfDigits(int n)
{
    int digit, sum = 0;
    if(n == 0)
    {
        return 0;
    }
    else
    {
        digit = n % 10;
        sum = digit + sumOfDigits(n / 10);
        return sum;
    }
}
// Main function
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
}