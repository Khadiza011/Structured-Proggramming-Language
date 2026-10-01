#include <stdio.h>

long long factorial(int number)
{
    int i;
    long long result = 1;

    for(i = 1; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int number;

    scanf("%d", &number);

    printf("%lld\n", factorial(number));

    return 0;
}
