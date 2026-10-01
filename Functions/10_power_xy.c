#include <stdio.h>

long long power(int x, int y)
{
    int i;
    long long result = 1;

    for(i = 1; i <= y; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d to the power %d is %lld\n", x, y, power(x, y));

    return 0;
}
