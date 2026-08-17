#include <stdio.h>

int main() {
    int n, i;
    int largest, second;
    int count = 0;
    int found = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    // Find largest
    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find second largest distinct number
    for (i = 0; i < n; i++) {
        if (a[i] != largest) {

            if (found == 0) {
                second = a[i];
                found = 1;
            }
            else if (a[i] > second) {
                second = a[i];
            }
        }
    }

    if (found == 0) {
        printf("Not possible\n");
    }
    else {
        // Count occurrence
        for (i = 0; i < n; i++) {
            if (a[i] == second) {
                count++;
            }
        }

        printf("Second Largest = %d\n", second);
        printf("Occurrence = %d\n", count);
    }

    return 0;
}
