#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Not an ugly number.\\n");
        return 1;
    }
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    if (n == 1) printf("Ugly number.\\n");
    else printf("Not an ugly number.\\n");
    return 0;
}
