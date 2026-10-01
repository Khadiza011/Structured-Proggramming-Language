#include <stdio.h>

struct student
{
    char name[50];
    char id[20];
    float cgpa;
};

int main()
{
    struct student s;

    // Take input
    scanf(" %[^\n]", s.name);
    scanf("%s", s.id);
    scanf("%f", &s.cgpa);

    return 0;
}
