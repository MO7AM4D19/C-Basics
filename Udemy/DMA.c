/*
Auther: Mohamed Khalid Anis
Date: 9-3-2022
Program: This program takes a string from the user and reprints it using Dynamic Memory Alocation
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char * pstring = NULL;
    int size;
    printf("please enter the string length: ");
    scanf(" %d",&size);
    pstring=(char*)malloc(sizeof(char)*size);
    if(pstring)
    {
        printf("please enter some text: ");
        scanf(" %s",pstring);
        printf("you entered: %s",pstring);
    }
    free(pstring);
    pstring=NULL;
}