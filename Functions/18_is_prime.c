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

int main()
{
    int number;

    scanf("%d", &number);

    if(IsPrime(number))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
