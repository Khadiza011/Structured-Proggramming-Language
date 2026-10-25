
#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(text, sizeof(text), file) != NULL)
    {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}
