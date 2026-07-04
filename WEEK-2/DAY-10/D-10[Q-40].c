// program to print character pyramid
#include <stdio.h>

int main(void)
{
    int i, j, k, n;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (n - i); j++)
        {
            printf("\t");
        }
        ch = 'A';
        for(k = 1; k <= i; k++)
        {
            printf("%c\t", ch);
            ch++;
        }

        ch -= 2;
        for(k = (i - 1); k >= 1; k--)
        {
            printf("%c\t", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}