#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];

    getchar();

    gets(str);


    int i;


    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }


    printf("%s",str);


    return 0;
}
