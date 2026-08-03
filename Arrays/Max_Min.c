#include<stdio.h>

int main()
{
    int n;
    int maximum, minimum;

    printf("Enter array size: ");
    scanf("%d", &n);

    int array[n];
  
    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    maximum = array[0];
    minimum = array[0];

    for(int i = 1; i < n; i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }

        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    printf("Maximum element = %d\n", maximum);
    printf("Minimum element = %d\n", minimum);

    return 0;
}

