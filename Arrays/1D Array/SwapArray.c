#include <stdio.h>

int main()
{
    int n, m, i;
    int a[100], b[100], temp[100];
    int tempSize;

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
        temp[i] = a[i];
    }

    tempSize = n;

    for(i = 0; i < m; i++)
    {
        a[i] = b[i];
    }

    n = m;

    for(i = 0; i < tempSize; i++)
    {
        b[i] = temp[i];
    }

    m = tempSize;

    printf("Array A : ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray B : ");

    for(i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
