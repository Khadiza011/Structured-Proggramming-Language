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

    int matrix[row][column];
    int transpose[column][row];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose matrix:\n");

    for(int i = 0; i < column; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}
