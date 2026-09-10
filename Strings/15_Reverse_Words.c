#include <stdio.h>

int main()
{
    int n;


    scanf("%d",&n);


    char str[n];


    getchar();


    gets(str);



    int i;
    int end=n-1;



    while(end>=0)
    {

        while(end>=0 && str[end]==' ')
        {
            end--;
        }


        int start=end;


        while(start>=0 && str[start]!=' ')
        {
            start--;
        }



        for(i=start+1; i<=end; i++)
        {
            printf("%c",str[i]);
        }


        if(start>=0)
        {
            printf(" ");
        }


        end=start-1;
    }



    return 0;
}
