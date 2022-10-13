/*
Auther:Mohamed Khalid Anis
Date:28-2-22
program:this program gives you the total rain in each of 5 years and the average rain for all the years and in each month
*/
#define YEARS 5
#define MONTHS 12
#include <stdio.h>
void main()
{
    //declaring variables
    int AllYears[5]={2011,2012,2013,2014,2015};
    float YearlyTotal[5],MonthAverage[12],Average,YearlySum=0,MonthlySum=0,YearsTotalSum=0;

    // initialize rainfall data for 2011-2015
    float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    for(int i=0;i<YEARS;i++)
    {
        for(int j=0;j<MONTHS;j++)
        {
            YearlySum+=rain[i][j];
        }
        YearlyTotal[i]=YearlySum;
        YearlySum=0;
    }

    for(int k=0;k<12;k++)
    {
        for(int w=0;w<5;w++)
        {
            MonthlySum+=rain[w][k];
        }
        MonthAverage[k]=MonthlySum/YEARS;
        MonthlySum=0;
    }
    printf("The average raining for every year from 2011 to 2015 is:\n");
    for(int y=0;y<=4;y++)
    {
        printf("%d \t %.2f \n",AllYears[y],YearlyTotal[y]);
        YearsTotalSum+=YearlyTotal[y];
    }
    Average=YearsTotalSum/YEARS;
    printf("the average of all years is %.2f \n",Average);
    printf("the average raining for each month from 2011 to 2015 is:\n");
    for(int m=0;m<12;m++)
    {
        printf(" %d \t %.2f \n",m+1,MonthAverage[m]);
    }
}