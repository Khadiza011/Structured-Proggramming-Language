#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int *p;

    scanf("%d", &n);

    for(p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }

    // Start from the last element
    p = arr + n - 1;

    while(p >= arr)
    {
        printf("%d", *p);

        if(p != arr)
            printf(" ");

        p--;
    }

    printf("\n");

    return 0;
}
