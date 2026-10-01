#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateSum()
{
    char line[200];
    char *token;
    int sum = 0;

    // Read all numbers from one line
    fgets(line, sizeof(line), stdin);

    token = strtok(line, " \n");

    while(token != NULL)
    {
        sum = sum + atoi(token);
        token = strtok(NULL, " \n");
    }

    printf("Sum In Function: %d\n", sum);

    return sum;
}

int main()
{
    int sum;

    sum = calculateSum();

    printf("Sum In Main: %d\n", sum);

    return 0;
}
