#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

int main()
{
    struct Student s[5];
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].marks);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d %.2f\n", s[i].id, s[i].marks);
    }

    return 0;
}
