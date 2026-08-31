#include <stdio.h>

int main()
{
    int m, n;
    int a[100][100];
    int i, j;
    int sum = 0;

    // Take number of rows and columns
    scanf("%d %d", &m, &n);

    // Take matrix input and calculate sum
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            sum = sum + a[i][j];
        }
    }

    // Display result
    printf("%d", sum);

    return 0;
}
