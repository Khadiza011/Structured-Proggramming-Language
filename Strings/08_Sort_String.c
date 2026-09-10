#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];


    getchar();

    gets(str);



    int i,j;
    char temp;



    for(i=0; str[i]!='\0'; i++)
    {
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }



    printf("%s",str);



    return 0;
}
