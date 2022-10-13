/*
Auther: Mohamed Khalid Anis
Date: 24/2/2022
Program input : number of working hours weekly
program output : gross salary, taxes, net salary
*/

#include <stdio.h>
//defining parametars
#define PayRate 12
#define OverPeyRate 18
#define TaxRate1 0.15
#define TaxRate2 0.2
#define TaxRate3 0.25
void main()
{
    //declaring variables
    int NumOfHour,NumOfOverHour,NumOfNormalHour,GrosSalary;
    float Tax,NetSalary;
    //asking for input
    printf("please enter your total number of working hours this week:");
    scanf(" %d",&NumOfHour);
    //calculating Gross Salary
    if(NumOfHour<=40)
    {
        GrosSalary=NumOfHour*PayRate;
    }
    else
    {
        NumOfOverHour=NumOfHour-40;
        NumOfNormalHour=NumOfHour-NumOfOverHour;
        GrosSalary=PayRate*NumOfNormalHour+OverPeyRate*NumOfOverHour;
    }
    //Calculating Tax
    if(GrosSalary<=300)
    {
        Tax=GrosSalary*TaxRate1;
    }
    else if(GrosSalary>300 && GrosSalary<=450)
    {
        Tax=300*TaxRate1+(GrosSalary-300)*TaxRate2;
    }
    else
    {
       Tax=300*TaxRate1+150*TaxRate2+(GrosSalary-450)*TaxRate3; 
    }
    //Calculation Net Salary
    NetSalary=GrosSalary-Tax;
    //Output
    printf(" Gross Salary: %d \n Tax: %.2f \n Net Salary: %.2f \n",GrosSalary,Tax,NetSalary);
}