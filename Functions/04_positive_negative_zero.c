#include <stdio.h>

void checkNumber(int number)
{
    if(number > 0)
        printf("positive\n");
    else if(number < 0)
        printf("negative\n");
    else
        printf("zero\n");
}

int main()
{
    int number;

    scanf("%d", &number);

    checkNumber(number);

    return 0;
}
