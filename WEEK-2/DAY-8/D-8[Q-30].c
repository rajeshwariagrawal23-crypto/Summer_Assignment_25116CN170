//program to print a number triangle pattern
#include <stdio.h>
void main()
{
    int i, j, rows, num;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        num =1;
        for(j=1; j<=i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

}
