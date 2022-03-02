/*
Date:21-2-2022
Auther: Mohamed Khalid Anis
program: This program takes minutes as input and gets years and days as output
*/

#include <stdio.h>
void main()
{
    int minutes;
    float hours,days,months,years;
    printf("please enter the number of minutes: ");
    scanf(" %d",&minutes);
    hours=minutes/60.00;
    days=hours/24;
    months=days/30;
    years=months/12;
    printf("%d minutes equals %f years or %f days",minutes,years,days);
}