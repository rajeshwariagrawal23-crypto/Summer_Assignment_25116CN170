// program to write a function to check prime 
#include <stdio.h>
// defining function to check prime
int prime (int n)
{
    int c,i;
    c = 0;
    if(n <= 1)
    {
        return 0; // not prime
    }
    for(i=2; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            return 0; // not prime 
        }
        else
        {
            return 1; // prime
        }
    }
}

int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // calling function to check prime
    if (prime(n))
    {
        printf("%d is a prime number. \n", n);
    }
    else
    {
        printf("%d is not a prime number. \n", n);
    }
return 0;
}