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

void sortAscending(int arr[], int n)
{
    int i, j, temp;

    // Simple bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100];
    int n, i;

    n = takeInput(arr);

    sortAscending(arr, n);

    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i != n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
