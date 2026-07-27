#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0;

    scanf("%d", &n);

    while (pow(2, i) < n)
    {
        i++;
    }

    if (pow(2, i) == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}
