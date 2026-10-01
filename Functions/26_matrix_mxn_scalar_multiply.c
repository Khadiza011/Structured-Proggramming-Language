#include <stdio.h>

void InputMatrix(int matrix[50][50], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[50][50], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);

            if(j != n - 1)
                printf(" ");
        }

        printf("\n");
    }
}

void ScalarMultiply(int matrix[50][50], int m, int n, int scalar)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}

int main()
{
    int matrix[50][50];
    int m, n, scalar;

    scanf("%d %d", &m, &n);

    InputMatrix(matrix, m, n);
    scanf("%d", &scalar);

    printf("Original:\n");
    ShowMatrix(matrix, m, n);

    ScalarMultiply(matrix, m, n, scalar);

    printf("\nMultiplied by %d:\n", scalar);
    ShowMatrix(matrix, m, n);

    return 0;
}
