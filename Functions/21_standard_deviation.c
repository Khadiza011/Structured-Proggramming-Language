#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int TakeInput(double arr[])
{
    char line[500];
    char *token;
    int n = 0;

    fgets(line, sizeof(line), stdin);

    token = strtok(line, " \n");

    while(token != NULL)
    {
        arr[n] = atof(token);
        n++;
        token = strtok(NULL, " \n");
    }

    return n;
}

double CalcMean(double arr[], int num_of_elem)
{
    int i;
    double sum = 0;

    for(i = 0; i < num_of_elem; i++)
    {
        sum = sum + arr[i];
    }

    return sum / num_of_elem;
}

double Calc_Std_deviation(double arr[], int num_of_elem)
{
    int i;
    double mean;
    double sum = 0;

    mean = CalcMean(arr, num_of_elem);

    for(i = 0; i < num_of_elem; i++)
    {
        sum = sum + (arr[i] - mean) * (arr[i] - mean);
    }

    return sqrt(sum / num_of_elem);
}

int main()
{
    double arr[100];
    int n;

    n = TakeInput(arr);

    printf("%.2f\n", Calc_Std_deviation(arr, n));

    return 0;
}
