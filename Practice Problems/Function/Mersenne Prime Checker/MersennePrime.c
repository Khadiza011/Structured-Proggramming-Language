

#include <stdio.h>

int is_prime(int x) {

    if (x <= 1)
    return 0;

    int flag = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int power_of_2(int x) {

    if (x == 1)
    return 1;

    if (x % 2 != 0 || x == 0)
    return 0;

    else
        return power_of_2(x / 2);
}

int is_mersenne(int x) {
    int flag = 0;
    if (is_prime(x)) {
        int power_plus_1 = x + 1;

        if (power_of_2(power_plus_1)) {
            flag = 1;
        }
    }
    return flag;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_mersenne(num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
