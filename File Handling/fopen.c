
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

    printf("File opened successfully.\n");

    fclose(file);

    return 0;
}
