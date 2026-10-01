#include <stdio.h>

struct triangle
{
    int triangle_id;
    float base;
    float height;
};

// Function to calculate area
float calculateArea(struct triangle t)
{
    return (t.base * t.height) / 2;
}

// Function to find maximum area
void findMaximum(struct triangle t[])
{
    int i;
    int maxIndex = 0;

    for(i = 1; i < 3; i++)
    {
        if(calculateArea(t[i]) > calculateArea(t[maxIndex]))
        {
            maxIndex = i;
        }
    }

    printf("Area of %d = %.0f\n",
           t[maxIndex].triangle_id,
           calculateArea(t[maxIndex]));
}

int main()
{
    struct triangle t[3];
    int i;

    // Input three triangles
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].triangle_id);
        scanf("%f", &t[i].base);
        scanf("%f", &t[i].height);
    }

    findMaximum(t);

    return 0;
}
