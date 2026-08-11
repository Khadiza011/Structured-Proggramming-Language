#include <stdio.h>
#include <math.h>

int main()
{
    float x, rad, result;

    scanf("%f", &x);

    rad = x * 3.1416 / 180;

    result = 2 * cos(rad) * cos(rad)
           - sqrt(3) * sin(rad)
           + sin(rad / 2);

    printf("%f", result);

    return 0;
}
