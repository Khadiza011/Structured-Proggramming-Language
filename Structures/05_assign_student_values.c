#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char id[20];
    float cgpa;
};

int main()
{
    struct student s;

    // Assign values
    strcpy(s.name, "Shakib Al Hasan");
    strcpy(s.id, "101");
    s.cgpa = 3.5;

    return 0;
}
