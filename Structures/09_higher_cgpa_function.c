#include <stdio.h>

struct student
{
    char name[50];
    char id[20];
    float cgpa;
};

// Function to display better student
void betterStudent(struct student s1, struct student s2)
{
    if(s1.cgpa > s2.cgpa)
    {
        printf("%s\n", s1.name);
        printf("%s\n", s1.id);
        printf("%.1f\n", s1.cgpa);
    }
    else
    {
        printf("%s\n", s2.name);
        printf("%s\n", s2.id);
        printf("%.1f\n", s2.cgpa);
    }
}

int main()
{
    struct student s1, s2;

    scanf(" %[^\n]", s1.name);
    scanf("%s", s1.id);
    scanf("%f", &s1.cgpa);

    scanf(" %[^\n]", s2.name);
    scanf("%s", s2.id);
    scanf("%f", &s2.cgpa);

    betterStudent(s1, s2);

    return 0;
}
