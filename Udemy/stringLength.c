/*
Auther: Mohamed Khalid Anis
Date: 8-3-2022
Program: this program calculates the length of a charectar array using pointer arithmatic
*/

#include <stdio.h>
int StringLength(const char *strStart);

void main()
{
    char arr[]="mohamed khalid";
    printf("the length of arr is %d",StringLength(arr));
}

int StringLength(const char *strStart)
{
    const char *strEnd=strStart;
    int Length=0;
    while(*strEnd)
    {
        strEnd++;
    }
    Length=strEnd-strStart;
    return Length;
}