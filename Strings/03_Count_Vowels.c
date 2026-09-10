#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];


    getchar();

    gets(str);



    int i;
    int count=0;


    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||
           str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }


    printf("%d",count);


    return 0;
}
