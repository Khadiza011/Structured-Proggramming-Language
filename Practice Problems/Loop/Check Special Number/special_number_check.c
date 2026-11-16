#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Not a Special Number");
        return 0;
    }

    temp = num;

    // Extract each digit
    do {
        digit = temp % 10;
        fact = 1;

        // Find factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;

    } while (temp != 0);

    // Compare sum with original number
    if (sum == num) {
        printf("Special Number");
    }
    else {
        printf("Not a Special Number");
    }

    return 0;
}
