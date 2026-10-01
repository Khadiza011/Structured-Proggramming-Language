#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    char *p;
    int vowel = 0;
    int consonant = 0;

    scanf(" %[^\n]", str);

    p = str;

    while(*p != '\0')
    {
        char ch = tolower(*p);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }

        p++;
    }

    printf("vowel: %d, Consonant: %d\n", vowel, consonant);

    return 0;
}
