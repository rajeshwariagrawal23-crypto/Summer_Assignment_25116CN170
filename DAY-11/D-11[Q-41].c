// program to write function to find sum of two numbers
#include <stdio.h>
// defining function to find sum of two numbers 
int sum(int a, int b)
{
    return a + b;
}

// main function
int main(void)
{
    int a, b, result;
    printf("Addition:-\n");
    printf("Enter 1st number: ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Enter 2nd number: ");
    if (scanf("%d", &b) != 1) return 1;
    // calling and printing function
    result = sum(a, b);
    printf("sum = %d\n", result);
    return 0;
}
