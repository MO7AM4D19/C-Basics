/*****************************************************************************************************************************
Date: 5/5/2022
Auther: Mohamed Khalid Anis
Program: This program uses the flexable array members feature to creat and use an array
*****************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct FAM
{
    int arrSize;
    int arr[];
};
void main()
{
    struct FAM *ptr=NULL;
    int inputSize;
    printf("Please enter the size of the array: ");
    scanf(" %d",&inputSize);
    ptr=malloc(sizeof(struct FAM)+inputSize*sizeof(int));
    ptr->arrSize=inputSize;
    ptr->arr[0]=5;
    ptr->arr[1]=9;
    printf("%d ",ptr->arr[0]);
    printf("%d",ptr->arr[1]);
}