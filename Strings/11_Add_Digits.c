#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];

    getchar();

    gets(str);


    int i;
    int sum=0;


    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum = sum + (str[i]-'0');
        }
    }


    printf("%d",sum);


    return 0;
}
