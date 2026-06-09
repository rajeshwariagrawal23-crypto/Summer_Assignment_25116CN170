// program to write recursive fibbonacci function
#include <stdio.h>
// Function to calculate Fibonacci using recursion
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
// Main function
void main()
{
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci of %d is %d\n", num, fibonacci(num));
}