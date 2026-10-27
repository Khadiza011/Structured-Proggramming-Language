#include <stdio.h>

int main(void)
{
    int num, choice;

    printf("Enter initial number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    do
    {
        printf("\n1) Add 5\n2) Subtract 5\n3) Add 10\n0) Exit\nChoice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                num += 5;
                printf("5 added. New value: %d\n", num);
                break;
            case 2:
                num -= 5;
                printf("5 subtracted. New value: %d\n", num);
                break;
            case 3:
                num += 10;
                printf("10 added. New value: %d\n", num);
                break;
            case 0:
                printf("Exiting. Final value: %d\n", num);
                break;
            default:
                printf("Invalid choice. Please select 0, 1, 2, or 3.\n");
        }
    } while (choice != 0);

    return 0;
}
