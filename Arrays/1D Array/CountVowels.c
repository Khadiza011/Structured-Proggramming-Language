#include <stdio.h>

int main()
{
    int n, i, count = 0;
    char a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
           a[i] == 'O' || a[i] == 'U' ||
           a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
           a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}
