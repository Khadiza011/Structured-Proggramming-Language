#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int *p;

    scanf("%d", &n);

    // Input using pointer, not array index
    for(p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }

    // Print using pointer
    for(p = arr; p < arr + n; p++)
    {
        printf("%d", *p);

        if(p < arr + n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
