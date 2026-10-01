#include <stdio.h>

int main()
{
    char str[200];
    char *p;
    int length = 0;

    scanf(" %[^\n]", str);

    p = str;

    while(*p != '\0')
    {
        length++;
        p++;
    }

    printf("%d\n", length);

    return 0;
}
