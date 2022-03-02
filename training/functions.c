/*
Auther: Mohamed Khalid Anis 
Date: 1-3-2022
program: this program contains 3 functions and the program tests them
*/

//functions declration
#include <stdio.h>
int gcd(int u,int v);
float abslute(float num1);
float sqr(float num2);

void main(void)
{
    float FirstNum,SecondNum;
    //first function test
    printf("please enter two positive integers: ");
    scanf(" %d %d",&FirstNum,&SecondNum);
    printf("The Greatest comon factor is %d \n",gcd(FirstNum,SecondNum));
    /*
    //second number test
    printf("please enter a number: ");
    scanf(" %f",&FirstNum);
    printf("The absolute value of %f is %f \n",FirstNum,abs(FirstNum));
    //third number test
    printf("please enter a positive number: ");
    scanf(" %f",&FirstNum);
    */
}

//functions implementations
int gcd(int u, int v)
{
    int temp;

    while( v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float abslute(float num1)
{
    if(num1<0)
    {
        num1=-num1;
    }
    return num1;
}

float sqr(float num2)
{
    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float returnValue = 0.0;

    if ( num2 < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while  ( absoluteValue (guess * guess - num2) >= epsilon )
           guess = ( num2 / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return returnValue;
}
