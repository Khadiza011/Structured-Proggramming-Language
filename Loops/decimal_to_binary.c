#include <stdio.h>

int main() {
    int num, binary[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Enter a non-negative number");
        return 0;
    }

    if (num == 0) {
        printf("Binary = 0");
        return 0;
    }

    // Store binary digits
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary = ");

    // Print binary digits in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
