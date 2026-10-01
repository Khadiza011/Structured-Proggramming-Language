#include <stdio.h>

void checkEvenOdd(int number)
{
    if(number % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
}

int main()
{
    int number;

    scanf("%d", &number);

    checkEvenOdd(number);

    return 0;
}
