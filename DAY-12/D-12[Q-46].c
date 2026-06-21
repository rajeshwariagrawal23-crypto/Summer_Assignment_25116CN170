// program to write a function for armstrong
#include <stdio.h>
// defining armstrong number 
int armstrong (int n)
{
    int sum=0, r, t=n;

    while(t>0)
    {
        r %= 10;
        sum += r*r*r;
        t /= 10; 
    }

    return(sum == n);
}
// main function
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // calling function
    if(armstrong(n))
    {
        printf("Armstrong number.");
    }
    else
    {
        printf("Not an armstrong number.");
    }
    return 0;
}
