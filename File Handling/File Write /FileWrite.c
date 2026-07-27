#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n, num;

    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Can't create file.\n");
        exit(1);
    }

    printf("File created successfully.\n");

    printf("How many numbers do you want to write? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);

    printf("Data written to sample.txt successfully.\n");

    return 0;
}
