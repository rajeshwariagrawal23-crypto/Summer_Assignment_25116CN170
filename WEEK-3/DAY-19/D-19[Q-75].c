// program to transpose a matrix
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int A[r][c], T[c][r];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // Transposing the matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            T[j][i] = A[i][j];
        }
    }
    printf("The transposed matrix is:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        { 
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}