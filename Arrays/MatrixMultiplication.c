#include<stdio.h>

int main()
{
    int row1, column1;
    int row2, column2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &column1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &column2);

    if(row1 <= 0 || column1 <= 0 || row2 <= 0 || column2 <= 0)
    {
        printf("Invalid matrix size");
        return 0;
    }

    if(column1 != row2)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }

    int matrix1[row1][column1];
    int matrix2[row2][column2];
    int result[row1][column2];

    printf("Enter first matrix:\n");

    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < column1; k++)
            {
                result[i][j] = result[i][j]
                + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Multiplied matrix:\n");

    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < column2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
