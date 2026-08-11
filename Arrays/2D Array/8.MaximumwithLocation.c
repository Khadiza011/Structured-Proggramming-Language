#include <stdio.h>

int main()
{
    int m, n, i, j;
    int max, row, col;

    scanf("%d %d", &m, &n);

    int a[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];
    row = 0;
    col = 0;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]", row, col);

    return 0;
}
