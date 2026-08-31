#include <stdio.h>

int main()
{
    int m, n;
    int a[100][100];
    int i, j, k, l;

    // Take matrix size
    scanf("%d %d", &m, &n);

    // Take matrix input
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Replace duplicate values with -1
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < m; k++)
            {
                for(l = 0; l < n; l++)
                {
                    // Check duplicate but not the same position
                    if(i != k || j != l)
                    {
                        if(a[i][j] == a[k][l])
                        {
                            a[k][l] = -1;
                        }
                    }
                }
            }
        }
    }

    // Display matrix
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
