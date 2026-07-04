// program to recursive reverse a number
#include <stdio.h>
// Function to reverse a number using recursion
int reverseNumber(int n, int rev)       
{
    if(n == 0)
    {
        return rev;
    }
    else
    {
        rev = rev * 10 + n % 10;
        return reverseNumber(n / 10, rev);
    }
}
// Main function   
void main()
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverseNumber(num, rev);
    printf("Reverse of %d is %d\n", num, rev);
}