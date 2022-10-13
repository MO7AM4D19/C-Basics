/*
Auther: Mohamed Khalid Anis
Date: 9-3-2022
program: This program takes number as input and returns it squered using pass by refrence method
*/

#include <stdio.h>
void square(int * pnum);
void main()
{
    int num;
    printf("Please enter a number: ");
    scanf(" %d",&num);
    square(&num);
    printf("the square of this number is %d",num);

}

void square(int * pnum)
{
    *pnum*=*pnum;
}