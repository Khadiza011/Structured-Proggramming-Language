#include <stdio.h>

int IsPrime(int number)
{
    int i;

    if(number < 2)
        return 0;

    for(i = 2; i * i <= number; i++)
    {
        if(number % i == 0)
            return 0;
    }

    return 1;
}

int GenNthPrime(int n)
{
    int number = 1;
    int count = 0;

    while(count < n)
    {
        number++;

        if(IsPrime(number))
            count++;
    }

    return number;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%dth Prime: %d\n", n, GenNthPrime(n));

    return 0;
}
