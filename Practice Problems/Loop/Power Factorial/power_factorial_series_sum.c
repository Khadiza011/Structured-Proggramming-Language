#include <stdio.h>

int main() {
    int n, i, j;
    double x, power, fact, sum = 0;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate series up to n terms
    for (i = 1; i <= n; i++) {
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
