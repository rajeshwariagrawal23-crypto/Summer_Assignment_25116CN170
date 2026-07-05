// program to subtract two matrices
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(r1 != r2 || c1 != c2)
    {
        printf("Matrix subtraction is not possible. The dimensions of the matrices must be the same.\n");
        return 0;
    }
    int A[r1][c1], B[r2][c2], C[r1][c1];
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    // Subtracting the two matrices
    for(i = 0; i < r1; i++)
    {   
        for(j = 0; j < c1; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("The resultant matrix after subtraction is:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}