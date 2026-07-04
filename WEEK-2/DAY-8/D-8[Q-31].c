// program to print character pyramid pattern
#include <stdio.h>
void main()
{
    int i, j, rows;
    char ch='A';
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        ch = 'A';
        for(j=1; j<=i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}