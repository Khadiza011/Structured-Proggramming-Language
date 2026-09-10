#include <stdio.h>

int main()
{
    int n;


    scanf("%d",&n);


    char str[n];


    getchar();


    gets(str);



    int length=0;


    while(str[length]!='\0')
    {
        length++;
    }



    int i;

    int flag=0;



    for(i=0; i<length/2; i++)
    {

        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }

    }



    if(flag==0)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }



    return 0;
}
