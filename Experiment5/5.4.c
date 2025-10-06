#include <stdio.h>

int main(void)
{
    int m, n, p, q;

    printf("Dimensions of Matrix A: ");
    scanf("%i %i", &m, &n);

    printf("Dimensions of Matrix B: ");
    scanf("%i %i", &p, &q);

    if (n != p)
    {
        printf("Incompatible.\n");
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Matric A: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix B: \n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
        scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix A:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("A x B = \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
}
