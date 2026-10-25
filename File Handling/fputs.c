
#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("message.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fputs("Hello, World!\n", file);
    fputs("I am learning C programming.\n", file);

    fclose(file);

    printf("Text written successfully.\n");

    return 0;
}
