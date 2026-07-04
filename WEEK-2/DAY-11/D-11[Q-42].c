// program to write fumction to find maximum
#include <stdio.h>
// defining maximum function
int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
// main function
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    // calling and printing function
    printf("The maximum between the two number is %d\n", maximum(a, b));

    return 0;
}