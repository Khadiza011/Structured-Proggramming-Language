#include <stdio.h>

struct student
{
    char name[50];
    char id[20];
    float cgpa;
};

int main()
{
    // Assigning values while declaring
    struct student s = {"Shakib Al Hasan", "101", 3.5};

    return 0;
}
