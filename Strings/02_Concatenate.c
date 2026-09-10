#include <stdio.h>

int main()
{
    int n1,n2;

    scanf("%d",&n1);

    char a[n1];

    getchar();

    gets(a);



    scanf("%d",&n2);

    char b[n2];

    getchar();

    gets(b);



    int i=0;
    int j=0;


    while(a[i]!='\0')
    {
        i++;
    }


    while(b[j]!='\0')
    {
        a[i]=b[j];

        i++;
        j++;
    }


    a[i]='\0';



    printf("%s",a);


    return 0;
}
