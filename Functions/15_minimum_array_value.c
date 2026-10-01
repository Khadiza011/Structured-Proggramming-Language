#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int takeInput(int arr[])
{
    char line[300];
    char *token;
    int n = 0;

    fgets(line, sizeof(line), stdin);

    token = strtok(line, " \n");

    while(token != NULL)
    {
        arr[n] = atoi(token);
        n++;
        token = strtok(NULL, " \n");
    }

    return n;
}

int findMinimum(int arr[], int n)
{
    int i;
    int minimum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < minimum)
            minimum = arr[i];
    }

    return minimum;
}

int main()
{
    int arr[100];
    int n;

    n = takeInput(arr);

    printf("Minimum Value: %d\n", findMinimum(arr, n));

    return 0;
}
