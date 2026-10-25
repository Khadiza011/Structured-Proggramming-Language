
#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data.txt", "w");

    // "w" mode creates a file if it does not exist, but overwrites its existing contents if it does.
    
    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Welcome to C programming.\n");
    fprintf(file, "File handling is easy to learn.\n");

    fclose(file);

    printf("Data saved successfully.\n");

    return 0;
}
