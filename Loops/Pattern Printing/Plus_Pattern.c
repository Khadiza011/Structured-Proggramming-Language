#include<stdio.h>

int main()
{
    int n;
    int middle;

    printf("Enter an odd size: ");
    scanf("%d", &n);

    middle = n / 2;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == middle || j == middle)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
