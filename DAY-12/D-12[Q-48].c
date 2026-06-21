// program to write a function for perfect number
#include <stdio.h>
// defining perfect number 
int pernum (int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    
    return (sum == n);
}
// main function
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // calling pernum 
    if(pernum(n))
    {
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
    return 0;
}