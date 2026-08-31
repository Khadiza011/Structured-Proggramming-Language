#include <stdio.h>

int main()
{
    int n;
    int a[100][100];
    int i, j;
    int symmetric = 1;

    // Take matrix size
    scanf("%d", &n);

    // Take matrix input
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetric matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0)
        {
            break;
        }
    }

    // Display result
    if(symmetric == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
