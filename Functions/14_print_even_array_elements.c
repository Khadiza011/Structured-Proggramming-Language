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

void printEven(int arr[], int n)
{
    int i;
    int first = 1;

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            if(first == 0)
                printf(" ");

            printf("%d", arr[i]);
            first = 0;
        }
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int n;

    n = takeInput(arr);

    printEven(arr, n);

    return 0;
}
