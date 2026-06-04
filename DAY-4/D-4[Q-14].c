// program to find the nth term of the fibbonacci series
#include <stdio.h>
void main()
{   
    int n, a = 0, b = 1, c;
    printf("Enter the term number: ");
    scanf("%d", &n);
    if (n == 1)
        printf("The %dst term of the fibbonacci series is: %d", n, a);
    else if (n == 2)
        printf("The %dnd term of the fibbonacci series is: %d", n, b);
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth term of the fibbonacci series is: %d", n, c);
    }
}   