#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int dollar;
    int space;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        // Number of $
        if(i <= n/2)
        {
            dollar = 2*i + 1;
        }
        else
        {
            dollar = 2*(n-i) - 1;
        }

        // Number of _ before and after
        space = (n - dollar) / 2;

        // Print left _
        for(j = 0; j < space; j++)
        {
            printf("_");
        }

        // Print $
        for(j = 0; j < dollar; j++)
        {
            printf("$");

            // Print _ between $
            if(j != dollar-1)
            {
                printf("_");
            }
        }

        // Print right _
        for(j = 0; j < space; j++)
        {
            printf("_");
        }

        printf("\n");
    }

    return 0;
}
