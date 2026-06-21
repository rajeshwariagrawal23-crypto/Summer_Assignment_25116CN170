//program to write a functionn to palindrome 
#include <stdio.h>
// defining palindrome function
int palindrome (int n)
{
    int r, t=n;
    while(t>0)
    {
        r = r*10 + t % 10;
        t /= 10;
    }
    return (r == n);
}
// main function
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // calling function
    if(palindrome(n))
    {
        printf("Palindrome number.");
    }
    else
    {
        printf("Not a palindrome number.");
    }
}