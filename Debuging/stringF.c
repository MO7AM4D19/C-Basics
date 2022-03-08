/*
Auther: Mohamed Khalid Anis
Date:8-3-2022
*/

#include <stdio.h>
int count(char arr[]);
void concatnate(const char arr1[],const char arr2[],char result[]);
char compare(const char arr1[],const char arr2[]);

void main()
{
    char string1[]="ahmed ",string2[]="ahmed ";
    printf("%d",compare(string1,string2));
}

int count(char arr[])
{
    int i=0;
    for(;arr[i]!='\0';i++);
    return i-1;
}

void concatnate(const char arr1[],const char arr2[],char result[])
{
    int i=0;
    for(;arr1[i]!='\0';i++)
    {
        result[i]=arr1[i];
    }
    for(int j=0;arr2[j]!='\0';j++)
    {
        result[i+j]=arr2[j];
    }
}

char compare(const char arr1[],const char arr2[])
{
    int i=0,flag;
    for(;arr1[i]==arr2[i];i++);
    if(arr1[i+1]=='\0'&&arr2[i+1]=='\0')
    {
        flag =1;
    }
    else
    {
        flag=0;
    }
    return flag;
}
