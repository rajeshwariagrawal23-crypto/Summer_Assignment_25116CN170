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
    }
}