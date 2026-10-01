#include <stdio.h>

struct player
{
    char name[50];
    char country[30];
    int runs[3];
    int wickets[3];
    int points[3];
};

int main()
{
    struct player p[2];
    int i, j;
    int runPoint;

    // Input two players
    for(i = 0; i < 2; i++)
    {
        scanf(" %[^\n]", p[i].name);
        scanf(" %[^\n]", p[i].country);

        // Runs of 3 matches
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &p[i].runs[j]);
        }

        // Wickets of 3 matches
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &p[i].wickets[j]);
        }
    }

    // Calculate points
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(p[i].runs[j] <= 25)
            {
                runPoint = 5;
            }
            else if(p[i].runs[j] <= 50)
            {
                runPoint = 10;
            }
            else if(p[i].runs[j] <= 75)
            {
                runPoint = 15;
            }
            else
            {
                runPoint = 20;
            }

            p[i].points[j] =
                runPoint + (p[i].wickets[j] * 12);
        }
    }

    // Display points of each match
    for(j = 0; j < 3; j++)
    {
        printf("Match %d:\n", j + 1);

        for(i = 0; i < 2; i++)
        {
            printf("%s points: %d\n",
                   p[i].name, p[i].points[j]);
        }
    }

    return 0;
}
