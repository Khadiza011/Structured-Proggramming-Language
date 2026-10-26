#include <stdio.h>

int main(void)
{
    float marks[5], total = 0.0f, average;
    int i, passed = 1;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d (0-100): ", i + 1);

        if (scanf("%f", &marks[i]) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Marks must be between 0 and 100\n");
            return 0;
        }

        total += marks[i];

        if (marks[i] < 40)
        {
            passed = 0;
        }
    }

    average = total / 5.0f;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (passed)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
