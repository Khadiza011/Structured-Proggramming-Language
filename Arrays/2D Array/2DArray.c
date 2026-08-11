#include<stdio.h>

int main()
{
    int array[10][10];
    int row, column;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &column);

    printf("Enter array elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("2D Array:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }

        printf("\n");
    }

    return 0;
}
