/*******************************************************************************************************************************
Auther: Mohamed Khalid Anis
Date: 22/3/2022
Program: this program initializes a struct and creat two variables of its type.one is initialized by the programer and one by user.
********************************************************************************************************************************/

#include <stdio.h>
struct employee 
{
    char name[20];
    int hireDate;
    float salary;
};

void main()
{
    struct employee me ={"Mohamed Khalid",2020,15000},user;
    printf("please enter your name: ");
    scanf(" %s",user.name);
    printf("please enter Date of hiring: ");
    scanf(" %d",&user.hireDate);
    printf("please enter your salary: ");
    scanf(" %f",&user.salary);
    printf(" Name: %s \n Date: %d \n salary: %f \n",me.name,me.hireDate,me.salary);
    printf(" Name: %s \n Date: %d \n salary: %f \n",user.name,user.hireDate,user.salary);

}