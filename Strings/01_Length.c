#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char str[n];

    getchar();

    gets(str);


    int i=0;
    int length=0;


    while(str[i]!='\0')
    {
        length++;
        i++;
    }


    printf("%d",length);


    return 0;
}
