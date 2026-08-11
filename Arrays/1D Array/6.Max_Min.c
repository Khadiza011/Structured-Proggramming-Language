#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int max, min;
    int maxIndex, minIndex;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    maxIndex = 0;
    minIndex = 0;

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }

        if(a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d", min, minIndex);

    return 0;
}
