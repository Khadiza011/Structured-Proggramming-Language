#include <stdio.h>

int main() {
    int num, digit, sum = 0, count = 0;
    float average;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make negative number positive
    if (num < 0) {
        num = -num;
    }

    // Extract digits one by one
    do {
        digit = num % 10;
        sum = sum + digit;
        count++;

        num = num / 10;
    } while (num != 0);

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
