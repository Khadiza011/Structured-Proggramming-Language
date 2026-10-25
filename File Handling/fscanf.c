
#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Rahim 20");
    fclose(file);

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fscanf(file, "%49s %d", name, &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    fclose(file);

    return 0;
}
