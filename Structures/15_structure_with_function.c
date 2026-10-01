#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

void display(struct Student s)
{
    printf("ID: %d\n", s.id);
    printf("Marks: %.2f", s.marks);
}

int main()
{
    struct Student s;

    scanf("%d", &s.id);
    scanf("%f", &s.marks);

    display(s);

    return 0;
}
