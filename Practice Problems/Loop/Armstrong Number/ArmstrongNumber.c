#include <stdio.h>

int main(void)
{
    int num, original, temp;
    int digits = 0;
    int digit;
    long long sum = 0;
    long long power;

    printf("Enter a non-negative integer: ");

    if (scanf("%d", &num) != 1 || num < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    original = num;
    temp = num;

    /* Count the number of digits */
    do
    {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = original;

    /* Calculate the sum of powered digits */
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (int i = 1; i <= digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
