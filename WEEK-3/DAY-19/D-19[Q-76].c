// program to find diagonal sum of a matrix
#include <stdio.h>
int main()
{
    int r, c, i, j, sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    if(r != c)
    {
        printf("Diagonal sum is not possible. The matrix must be square.\n");
        return 0;
    }
    int A[r][c];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // Calculating the diagonal sum
    for(i = 0; i < r; i++)
    {
        sum += A[i][i]; // Summing the primary diagonal elements
    }
    printf("The sum of the diagonal elements is: %d\n", sum);
    return 0;
}