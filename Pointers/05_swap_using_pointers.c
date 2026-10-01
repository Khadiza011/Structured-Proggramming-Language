#include <stdio.h>

int main()
{
    int x, y, temp;
    int *p1, *p2;

    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    // Swap values using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("X = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
