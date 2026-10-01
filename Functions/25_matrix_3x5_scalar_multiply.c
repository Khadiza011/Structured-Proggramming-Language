#include <stdio.h>

void InputMatrix(int matrix[3][5])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[3][5])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d", matrix[i][j]);

            if(j != 4)
                printf(" ");
        }

        printf("\n");
    }
}

void ScalarMultiply(int matrix[3][5], int scalar)
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}

int main()
{
    int matrix[3][5];
    int scalar;

    InputMatrix(matrix);
    scanf("%d", &scalar);

    printf("Original:\n");
    ShowMatrix(matrix);

    ScalarMultiply(matrix, scalar);

    printf("\nMultiplied by %d:\n", scalar);
    ShowMatrix(matrix);

    return 0;
}
