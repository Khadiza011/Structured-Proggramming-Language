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
    int total1 = 0, total2 = 0;

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

    // Display points and MOM
    for(j = 0; j < 3; j++)
    {
        printf("Match %d:\n", j + 1);

        printf("%s points: %d\n",
               p[0].name, p[0].points[j]);

        printf("%s points: %d\n",
               p[1].name, p[1].points[j]);

        if(p[0].points[j] > p[1].points[j])
        {
            printf("MOM : %s\n", p[0].name);
        }
        else if(p[1].points[j] > p[0].points[j])
        {
            printf("MOM : %s\n", p[1].name);
        }
        else
        {
            printf("MOM : Tie\n");
        }

        total1 += p[0].points[j];
        total2 += p[1].points[j];
    }

    // Find Man of the Series
    if(total1 > total2)
    {
        printf("Man of the Series: %s\n", p[0].name);
    }
    else if(total2 > total1)
    {
        printf("Man of the Series: %s\n", p[1].name);
    }
    else
    {
        printf("Man of the Series: Tie\n");
    }

    return 0;
}
