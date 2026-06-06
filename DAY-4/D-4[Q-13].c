<<<<<<< HEAD
// program to generate fibbonacci series up to n terms
#include <stdio.h>
void main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibbonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
=======
//program to print the Fibonacci series up to n terms
#include <stdio.h>
void main()
{
    int i, n, a=0, b=1, c;
    printf("enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", a);
        c=a+b;
        a=b;
        b=c;
>>>>>>> 3606c1a (assignment)
    }
}