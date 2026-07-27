#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime");
    }
    else
    {
        for (i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                printf("Not Prime");
                break;
            }
        }

        if (i == n)
        {
            printf("Prime");
        }
    }

    return 0;
}
