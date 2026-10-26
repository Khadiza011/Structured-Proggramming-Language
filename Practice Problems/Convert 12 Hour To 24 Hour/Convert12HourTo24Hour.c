#include <stdio.h>

int main(void)
{
    int hour, minute;
    char period[3];

    printf("Enter time (HH:MM AM/PM): ");

    if (scanf("%d:%d %2s", &hour, &minute, period) != 3)
    {
        printf("Invalid input format.\n");
        return 1;
    }

    if (hour < 1 || hour > 12 ||
        minute < 0 || minute > 59)
    {
        printf("Invalid time.\n");
        return 1;
    }

    if (period[0] == 'P' || period[0] == 'p')
    {
        if (hour != 12)
        {
            hour += 12;
        }
    }
    else if (period[0] == 'A' || period[0] == 'a')
    {
        if (hour == 12)
        {
            hour = 0;
        }
    }
    else
    {
        printf("Invalid AM/PM indicator.\n");
        return 1;
    }

    printf("24-hour time = %02d:%02d\n", hour, minute);

    return 0;
}
