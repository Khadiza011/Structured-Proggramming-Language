#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];


    getchar();

    gets(str);



    int i;
    int count=1;



    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }



    printf("%d",count);


    return 0;
}
