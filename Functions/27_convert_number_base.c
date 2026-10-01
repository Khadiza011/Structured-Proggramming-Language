#include <stdio.h>

void Get_Number_And_Base(int *number, int *base)
{
    scanf("%d %d", number, base);
}

void Convert_Number(int number, int base, char result[])
{
    char digits[] = "0123456789ABCDEF";
    char temp[100];
    int i = 0;
    int j;

    if(number == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return;
    }

    while(number > 0)
    {
        temp[i] = digits[number % base];
        number = number / base;
        i++;
    }

    // Reverse the converted digits
    for(j = 0; j < i; j++)
    {
        result[j] = temp[i - 1 - j];
    }

    result[i] = '\0';
}

void Show_Converted_Number(char result[])
{
    printf("%s\n", result);
}

int main()
{
    int number, base;
    char result[100];

    Get_Number_And_Base(&number, &base);

    if(base < 2 || base > 16)
    {
        printf("Base not within proper range!\n");
        return 0;
    }

    Convert_Number(number, base, result);
    Show_Converted_Number(result);

    return 0;
}
