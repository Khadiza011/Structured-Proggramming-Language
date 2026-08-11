#include <stdio.h>

int main()
{
    double r;
    double pi = 3.14;
    double area;

    scanf("%lf", &r);

    area = 2 * pi * r;

    printf("Area: %g", area);

    return 0;
}
