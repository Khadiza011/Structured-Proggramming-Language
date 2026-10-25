#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
