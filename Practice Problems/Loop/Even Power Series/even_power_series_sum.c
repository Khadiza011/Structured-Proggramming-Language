#include <stdio.h>

int main() {
    int n, i, j;
    double x, power, fact, sum = 1;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter highest even power n: ");
    scanf("%d", &n);

    // Calculate each even-power term
    for (i = 2; i <= n; i = i + 2) {
        power = 1;
        fact = 1;

        for (j = 1; j <= i; j++) {
            power = power * x;
            fact = fact * j;
        }

        sum = sum + power / fact;
    }

    printf("Sum = %.4lf", sum);

    return 0;
}
