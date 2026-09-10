#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);


    char str[n];


    getchar();

    gets(str);



    char result[n];


    int i,j;
    int k=0;
    int duplicate;



    for(i=0; str[i]!='\0'; i++)
    {
        duplicate=0;


        for(j=0; j<k; j++)
        {
            if(str[i]==result[j])
            {
                duplicate=1;
                break;
            }
        }


        if(duplicate==0)
        {
            result[k]=str[i];
            k++;
        }
    }



    result[k]='\0';



    printf("%s",result);



    return 0;
}
