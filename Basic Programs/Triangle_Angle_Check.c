#include <stdio.h>

int main()
{
    int a, b, c;

    // Input three angles
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if angles are valid and sum is 180
    if (a > 0 && a < 180 &&
        b > 0 && b < 180 &&
        c > 0 && c < 180 &&
        (a + b + c == 180))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
