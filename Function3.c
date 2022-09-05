#include <stdio.h>
void product(int matrix1[][20], int a, int b, int matrix2[][20], int c, int d)
{
    int products[20][20];
    int i, j, k;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= d; j++)
        {
            products[i][j] = 0;
        }
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= d; j++)
        {
            for (k = 1; k <= b; k++)
            {
                products[i][j] = products[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\n\n The Product of Two Matrices is \n\n");
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= d; j++)
        {
            printf("\t%d", products[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[20][20], m2[20][20];
    int i, j, k, m, n, p, q;
 
    printf(" Enter First Matrix size \n");
    scanf("%d %d", &m, &n);
    printf("\n Enter Second Matrix size \n");
    scanf("%d %d", &p, &q);
    if (n == p)
    {
        printf("\nEnter the elements of First Matrix : \n");
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= n; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }
        printf("\nEnter the elements of Second Matrix: \n");
        for (i = 1; i <= p; i++)
        {
            for (j = 1; j <= q; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }
        printf("\n The First Matrix is : \n\n");
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= n; j++)
            {
                printf("\t %d ", m1[i][j]);
            }
            printf("\n");
        }
        printf("\n The Second Matrix is : \n\n");
        for (i = 1; i <= p; i++)
        {
            for (j = 1; j <= q; j++)
            {
                printf("\t %d ", m2[i][j]);
            }
            printf("\n");
        }
        product(m1, m, n, m2, p, q);
    }
    else
        printf("\n\n The Two Matrices are not compatible to find Product !! \n\n");

    return (0);
}