#include <stdio.h>

int main() {
    long long num, divisor = 1;
    int digit;

    printf("Enter a positive number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Enter a positive number");
        return 0;
    }

    // Find the highest place value
    while (num / divisor >= 10) {
        divisor = divisor * 10;
    }

    // Print digits from left to right
    while (divisor > 0) {
        digit = num / divisor;

        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

        // Remove the first digit
        num = num % divisor;
        divisor = divisor / 10;
    }

    return 0;
}
