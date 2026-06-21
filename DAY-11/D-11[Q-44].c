// program to write function to find factorial
#include <stdio.h>
//defining function to find factorial
int factorial (int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact *= i;
    }

    return fact;
}
// main function
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // calling and printing function
    printf("factorial of the %d is %d. \n", n, factorial(n));
    return 0;
}