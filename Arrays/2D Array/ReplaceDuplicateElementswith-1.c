#include <stdio.h>

int main()
{
    int m, n, i, j, k, l;
    int duplicate;

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
        for(j = 0; j < n; j++)
        {
            duplicate = 0;

            for(k = 0; k < m; k++)
            {
                for(l = 0; l < n; l++)
                {
                    if(k < i || (k == i && l < j))
                    {
                        if(a[k][l] == a[i][j])
                        {
                            duplicate = 1;
                        }
                    }
                }
            }

            if(duplicate == 1)
            {
                a[i][j] = -1;
            }
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
