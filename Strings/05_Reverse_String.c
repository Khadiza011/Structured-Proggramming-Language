#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);


    char str[n];


    getchar();

    gets(str);



    int i;
    int length=0;



    while(str[length]!='\0')
    {
        length++;
    }



    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }



    return 0;
}
