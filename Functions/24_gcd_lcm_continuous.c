#include <stdio.h>

int findGCD(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int findLCM(int a, int b)
{
    return (a / findGCD(a, b)) * b;
}

int main()
{
    int a, b;

    // Keeps taking input until end of file
    while(scanf("%d %d", &a, &b) == 2)
    {
        printf("GCD: %d\n", findGCD(a, b));
        printf("LCM: %d\n", findLCM(a, b));
    }

    return 0;
}
