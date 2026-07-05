// program to find column wise sum of a matrix
#include <stdio.h>
int main() 
{
    int a[10][10], i, j, m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Column-wise sums:\n");
    for (j = 0; j < n; j++) 
    {
        int sum = 0;
        for (i = 0; i < m; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
    return 0;
}   