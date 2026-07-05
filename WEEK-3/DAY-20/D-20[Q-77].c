// program to multiply matrices 
#include <stdio.h>

int main() 
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q;

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p) {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }

    // Initialize result matrix to zero
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}