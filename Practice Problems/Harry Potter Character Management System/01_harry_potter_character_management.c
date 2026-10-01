#include <stdio.h>
#include <string.h>

struct Character
{
    char name[100];
    int age;
    char house[50];
    int wizard_point;
};

int main()
{
    struct Character characters[5];
    char searchName[100];
    int i;
    int found = 0;
    int totalAge = 0;
    int longest = 0;
    int shortest = 0;

    // Input information for 5 characters
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter information for character %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", characters[i].name);

        printf("Age: ");
        scanf("%d", &characters[i].age);

        printf("House: ");
        scanf(" %[^\n]", characters[i].house);

        printf("Wizard Point: ");
        scanf("%d", &characters[i].wizard_point);

        totalAge = totalAge + characters[i].age;
    }

    // Display all character information
    printf("\n--- All Character Information ---\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nCharacter %d\n", i + 1);
        printf("Name         : %s\n", characters[i].name);
        printf("Age          : %d\n", characters[i].age);
        printf("House        : %s\n", characters[i].house);
        printf("Wizard Point : %d\n", characters[i].wizard_point);
    }

    // Search character by name
    printf("\nEnter character name to search: ");
    scanf(" %[^\n]", searchName);

    for(i = 0; i < 5; i++)
    {
        if(strcmp(characters[i].name, searchName) == 0)
        {
            printf("\nCharacter Found!\n");
            printf("Name         : %s\n", characters[i].name);
            printf("Age          : %d\n", characters[i].age);
            printf("House        : %s\n", characters[i].house);
            printf("Wizard Point : %d\n", characters[i].wizard_point);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nCharacter not found.\n");
    }

    // Calculate average age
    printf("\nAverage Age: %.2f\n", totalAge / 5.0);

    // Find longest and shortest names
    for(i = 1; i < 5; i++)
    {
        if(strlen(characters[i].name) > strlen(characters[longest].name))
        {
            longest = i;
        }

        if(strlen(characters[i].name) < strlen(characters[shortest].name))
        {
            shortest = i;
        }
    }

    printf("Longest Name : %s\n", characters[longest].name);
    printf("Shortest Name: %s\n", characters[shortest].name);

    return 0;
}
