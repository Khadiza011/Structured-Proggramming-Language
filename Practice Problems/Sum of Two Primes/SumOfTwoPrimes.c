#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int num;
    int found = 0;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 4)
    {
        printf("Cannot be expressed as the sum of two primes.\n");
        return 0;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d = %d + %d\n", num, i, num - i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Cannot be expressed as the sum of two primes.\n");
    }

    return 0;
}
