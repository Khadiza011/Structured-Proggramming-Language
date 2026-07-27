#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("demo.text", "r"); // Open the file in read mode
    if (fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    int n;
    int numbers_found = 0;

    // Read integers from the file
    while (fscanf(fp, "%d", &n) == 1) {
        printf("The number from the file is: %d\n", n);
        numbers_found++;
    }

    // Check if no numbers were found
    if (numbers_found == 0) {
        printf("No valid integers found in the file.\n");
    }

    fclose(fp); // Close the file
    return 0;
}
