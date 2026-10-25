
#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Name: Rahim\n");
    fprintf(file, "Age: %d\n", 20);
    fprintf(file, "Marks: %.2f\n", 85.50);

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}
