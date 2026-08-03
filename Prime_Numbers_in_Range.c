#include<stdio.h>

int main()
{
    int start, end;

    printf("Enter starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers: ");

    for(int n = start; n <= end; n++)
    {
        int prime = 1;

        if(n <= 1)
        {
            prime = 0;
        }
        else
        {
            for(int i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 1)
        {
            printf("%d ", n);
        }
    }

    return 0;
}
