
#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("message.txt", "w");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Learning C File Handling.");
    fclose(file);

    file = fopen("message.txt", "r");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    if (fgets(text, sizeof(text), file) != NULL)
    {
        printf("%s\n", text);
    }

    fclose(file);

    return 0;
}
