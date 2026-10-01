#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int *p;
    int sum = 0;

    scanf("%d", &n);

    // Input array using pointer
    for(p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }

    // Calculate sum using pointer
    for(p = arr; p < arr + n; p++)
    {
        sum = sum + *p;
    }

    printf("%d\n", sum);

    return 0;
}
