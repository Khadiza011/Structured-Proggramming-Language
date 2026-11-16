#include <stdio.h>

int main() {
    int n, i, j, sign = -1;
    double x, power, fact, sum = 1;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter highest even power n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2) {
        power = 1;
        fact = 1;

        // Calculate power and factorial
        for (j = 1; j <= i; j++) {
            power = power * x;
            fact = fact * j;
        }

        sum = sum + sign * (power / fact);

        // Change sign for next term
        sign = -sign;
    }

    printf("Sum = %.4lf", sum);

    return 0;
}
