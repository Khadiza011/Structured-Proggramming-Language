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

void multiplyByTwo(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int arr[100];
    int n, i;

    n = takeInput(arr);

    multiplyByTwo(arr, n);

    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if(i != n - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
