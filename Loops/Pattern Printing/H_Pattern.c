#include <stdio.h>

int main()
{
    int n;
    int i, j;

    scanf("%d", &n);

    // Top part
    for(i = 1; i <= n / 2; i++)
    {
        printf("H");

        // Print spaces between H
        for(j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }

        printf("H\n");
    }

    // Middle part
    for(i = 1; i <= n; i++)
    {
        printf("H");
    }
    printf("\n");

    // Bottom part
    for(i = 1; i <= n / 2; i++)
    {
        printf("H");

        // Print spaces between H
        for(j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }

        printf("H\n");
    }

    return 0;
}
