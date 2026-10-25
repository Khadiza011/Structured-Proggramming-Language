#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
