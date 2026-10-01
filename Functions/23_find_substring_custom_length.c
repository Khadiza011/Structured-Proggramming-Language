#include <stdio.h>

int str_length(char str[])
{
    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    return length;
}

int find_substr(char a[], char b[])
{
    int i, j;
    int lenA = str_length(a);
    int lenB = str_length(b);

    for(i = 0; i <= lenA - lenB; i++)
    {
        for(j = 0; j < lenB; j++)
        {
            if(a[i + j] != b[j])
                break;
        }

        if(j == lenB)
            return 1;
    }

    // PDF sample shows 0 when substring is not found
    return 0;
}

int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    printf("%d\n", find_substr(a, b));

    return 0;
}
