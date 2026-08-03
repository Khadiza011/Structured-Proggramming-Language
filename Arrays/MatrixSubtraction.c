#include<stdio.h>

int main()
{
    int row, column;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &column);

    if(row <= 0 || column <= 0)
    {
        printf("Invalid matrix size");
        return 0;
    }

    int matrix1[row][column];
    int matrix2[row][column];
    int result[row][column];

    printf("Enter first matrix:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Subtracted matrix:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
