/*
Auther: Mohamed Khalid Anis 
Date: 8-3-2022
Program: This program prints the value of a pointer's aderss,the value of the pointer and the value that the pointer is pointig to
*/

#include <stdio.h>
void main()
{
    int num=20;
    int * pnum = NULL;
    pnum = &num;
    printf("the pointer's adress is %p \n",(void*)&pnum);
    printf("the value of the pointer is %p \n",pnum);
    printf("the value that the pointer is pointing to is %d \n",*pnum);
}