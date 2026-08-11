#include <stdio.h>

int main()
{
    int n, i, search;
    int found = 0;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            if(found == 0)
            {
                printf("FOUND at index position: ");
            }

            printf("%d ", i);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("NOT FOUND");
    }

    return 0;
}
