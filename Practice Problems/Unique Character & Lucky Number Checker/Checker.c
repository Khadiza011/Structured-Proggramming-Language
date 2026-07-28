#include <stdio.h>
#include <ctype.h>

int hasUniqueCharacters(char *str) {
    char *ptr1, *ptr2;
    for (ptr1 = str; *ptr1 != '\0'; ptr1++) {
        for (ptr2 = ptr1 + 1; *ptr2 != '\0'; ptr2++) {
            if (*ptr1 == *ptr2) {
                return 0;
            }
        }
    }
    return 1;
}

void modifyString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char nextChar = str[i] + 1;


        while (nextChar == 'a' || nextChar == 'e' || nextChar == 'i' ||
               nextChar == 'o' || nextChar == 'u' ||
               nextChar == 'A' || nextChar == 'E' || nextChar == 'I' ||
               nextChar == 'O' || nextChar == 'U') {
            nextChar++;
        }
        str[i] = nextChar;
    }
}


int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isLuckyNumber(int num) {
    return (num % 2 != 0) && isPrime(num);
}

int main() {
    char name[50];
    int age;


    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    if (hasUniqueCharacters(name)) {
        printf("Unique: YES\n");
        modifyString(name);
        printf("Modified string: %s\n", name);
    } else {
        printf("Unique: No\n");
    }

    if (isLuckyNumber(age)) {
        printf("Lucky Number: YES\n");
    } else {
        printf("Lucky Number: No\n");
    }

    return 0;
}
