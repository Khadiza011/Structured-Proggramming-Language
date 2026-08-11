#include <stdio.h>

int main()
{
    int n, m, i, j;
    int a[100], b[100], c[200];
    int count = 0;
    int duplicate;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++)
    {
        duplicate = 0;

        for(j = 0; j < count; j++)
        {
            if(c[j] == a[i])
            {
                duplicate = 1;
            }
        }

        if(duplicate == 0)
        {
            c[count] = a[i];
            count++;
        }
    }

    for(i = 0; i < m; i++)
    {
        duplicate = 0;

        for(j = 0; j < count; j++)
        {
            if(c[j] == b[i])
            {
                duplicate = 1;
            }
        }

        if(duplicate == 0)
        {
            c[count] = b[i];
            count++;
        }
    }

    for(i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
