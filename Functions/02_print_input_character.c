#include <stdio.h>

void showValue(char ch)
{
    printf("Value received from main: %c\n", ch);
}

int main()
{
    char ch;

    scanf(" %c", &ch);

    showValue(ch);

    return 0;
}
