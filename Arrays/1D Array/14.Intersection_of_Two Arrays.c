#include <stdio.h>

int main()
{
    int n, m, i, j, k;
    int a[100], b[100], c[100];
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
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                duplicate = 0;

                for(k = 0; k < count; k++)
                {
                    if(c[k] == a[i])
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
        }
    }

    if(count == 0)
    {
        printf("Empty set");
    }
    else
    {
        for(i = 0; i < count; i++)
        {
            printf("%d ", c[i]);
        }
    }

    return 0;
}
