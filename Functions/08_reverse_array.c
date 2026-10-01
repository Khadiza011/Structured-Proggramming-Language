#include <stdio.h>

void printReverse(int arr[], int n)
{
    int i;

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);

        if(i != 0)
            printf(" ");
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, n);

    return 0;
}
