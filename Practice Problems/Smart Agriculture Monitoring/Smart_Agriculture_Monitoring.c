#include <stdio.h>

int main()
{
    int farms, days;

    printf("Enter number of farms: ");
    scanf("%d",&farms);


    printf("Enter number of days: ");
    scanf("%d",&days);



    int temperature[farms][days];


    int i,j;



    // Taking temperature input

    for(i=0;i<farms;i++)
    {
        printf("\nEnter temperature for Farm %d:\n",i+1);


        for(j=0;j<days;j++)
        {
            while(1)
            {
                scanf("%d",&temperature[i][j]);


                if(temperature[i][j]>=5 && temperature[i][j]<=60)
                {
                    break;
                }

                else
                {
                    printf("Invalid temperature! Enter between 5 and 60: ");
                }

            }
        }
    }





    printf("\nFarm-wise Summary\n");



    // Farm analysis

    for(i=0;i<farms;i++)
    {
        int sum=0;

        int heatDays=0;

        int coldDays=0;



        for(j=0;j<days;j++)
        {
            sum=sum+temperature[i][j];


            if(temperature[i][j]>40)
            {
                heatDays++;
            }


            if(temperature[i][j]<10)
            {
                coldDays++;
            }
        }



        float average=sum/(float)days;



        printf("\nFarm %d\n",i+1);

        printf("Average Temperature: %.2f°C\n",average);



        if(average>=30)
        {
            printf("Condition: High Heat Stress\n");
        }

        else if(average>=20)
        {
            printf("Condition: Optimal\n");
        }

        else
        {
            printf("Condition: Low Temperature Stress\n");
        }



        printf("Heat Stress Days (>40°C): %d\n",heatDays);

        printf("Cold Stress Days (<10°C): %d\n",coldDays);

    }





    // Highest and lowest temperature


    int highest=temperature[0][0];

    int lowest=temperature[0][0];


    int highFarm=0;

    int lowFarm=0;



    for(i=0;i<farms;i++)
    {
        for(j=0;j<days;j++)
        {
            if(temperature[i][j]>highest)
            {
                highest=temperature[i][j];
                highFarm=i;
            }


            if(temperature[i][j]<lowest)
            {
                lowest=temperature[i][j];
                lowFarm=i;
            }

        }
    }



    printf("\nExtreme Temperature Records\n");


    printf("Highest Single-Day Temperature: %d°C (Farm %d)\n",
            highest,highFarm+1);



    printf("Lowest Single-Day Temperature: %d°C (Farm %d)\n",
            lowest,lowFarm+1);






    // Daily average


    float dailyAverage[days];


    printf("\nDaily Average Temperatures\n");



    for(j=0;j<days;j++)
    {
        int total=0;


        for(i=0;i<farms;i++)
        {
            total=total+temperature[i][j];
        }


        dailyAverage[j]=total/(float)farms;


        printf("Day %d: %.2f°C\n",
               j+1,dailyAverage[j]);

    }





    // Hottest and coldest day


    int hottest=0;

    int coldest=0;



    for(i=1;i<days;i++)
    {
        if(dailyAverage[i]>dailyAverage[hottest])
        {
            hottest=i;
        }


        if(dailyAverage[i]<dailyAverage[coldest])
        {
            coldest=i;
        }

    }




    printf("\nOverall Day Analysis\n");


    printf("Hottest Day: Day %d (%.2f°C)\n",
           hottest+1,dailyAverage[hottest]);



    printf("Coldest Day: Day %d (%.2f°C)\n",
           coldest+1,dailyAverage[coldest]);



    return 0;
}
