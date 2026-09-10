#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);


    char str[n];


    getchar();

    gets(str);



    int i,j;

    int max=0;

    char answer;



    for(i=0; str[i]!='\0'; i++)
    {
        int count=0;


        for(j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }


        if(count>max)
        {
            max=count;
            answer=str[i];
        }
    }



    printf("%c",answer);



    return 0;
}
