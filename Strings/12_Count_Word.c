#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    char str[n];

    getchar();

    gets(str);



    int m;

    scanf("%d",&m);

    getchar();


    char word[m];

    gets(word);



    int i,j;
    int count=0;
    int match;



    for(i=0; str[i]!='\0'; i++)
    {
        match=1;


        for(j=0; word[j]!='\0'; j++)
        {
            if(str[i+j]!=word[j])
            {
                match=0;
                break;
            }
        }


        if(match==1)
        {
            count++;
        }
    }



    printf("%d",count);



    return 0;
}
