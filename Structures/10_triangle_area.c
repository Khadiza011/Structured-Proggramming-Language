#include <stdio.h>

struct triangle
{
    int triangle_id;
    float base;
    float height;
};

int main()
{
    struct triangle t[3];
    float area;
    int i;

    // Input three triangles
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &t[i].triangle_id);
        scanf("%f", &t[i].base);
        scanf("%f", &t[i].height);
    }

    // Calculate and display area
    for(i = 0; i < 3; i++)
    {
        area = (t[i].base * t[i].height) / 2;

        printf("Area of %d = %.0f\n",
               t[i].triangle_id, area);
    }

    return 0;
}
