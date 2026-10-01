#include <stdio.h>

int stringLength(char str[])
{
    int i = 0;

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[200];

    fgets(str, sizeof(str), stdin);

    printf("%d\n", stringLength(str));

    return 0;
}
