// Program to find row wise sum of a matrix
#include <stdio.h>

int main() 
{
    int a[10][10], i, j, m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise sums:\n");
    for (i = 0; i < m; i++) {
        int sum = 0;
        for (j = 0; j < n; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}