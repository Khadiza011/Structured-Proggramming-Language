#include <stdio.h>

int main()
{
    int m, n, i, j, temp;

    scanf("%d %d", &m, &n);

    int a[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n / 2; j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
