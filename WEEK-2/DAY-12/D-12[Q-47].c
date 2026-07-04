// program to write a function for fibbonacci
#include <stdio.h>
// defining fibbonacci function
int fibbonacci (int n)
{
    int i, a=0, b=1, c;
    for(i=1; i<=n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b; 
        b = c;
    }
}
// main function
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // calling fibbonacci function
    fibbonacci(n);
    return 0;
}

