#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];


    getchar();

    gets(str);



    char ch;

    scanf("%c",&ch);



    int i;
    int count=0;



    for(i=0; str[i]!='\0'; i++)
    {

        if(str[i]==ch ||
          str[i]==ch+32 ||
          str[i]==ch-32)
        {
            count++;
        }

    }



    printf("%d",count);



    return 0;
}
