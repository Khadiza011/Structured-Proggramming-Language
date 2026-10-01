#include <stdio.h>

int calculateSum(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum In Function: %d\n", sum);

    return sum;
}

int main()
{
    int arr[100];
    int n, i, sum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = calculateSum(arr, n);

    printf("Sum In Main: %d\n", sum);

    return 0;
}
