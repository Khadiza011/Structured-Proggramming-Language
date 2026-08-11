#include <stdio.h>

int main()
{
    int n, m, i, j;
    int a[100], b[100];
    int found;

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
        found = 0;

        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
            }
        }

        if(found == 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
