/*****************************************************************************************************************************
Date:5/5/2022
Auther: Mohamed Khalid Anis
Program: This program uses the VLA by asking the user to enter the size and the elements of the array
*****************************************************************************************************************************/

#include <stdio.h>
void main()
{
    int size,sum=0;
    printf("Please enter the size of the array: ");
    scanf(" %d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the element number %d ",i);
        scanf(" %d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of all the elements of the array is %d",sum);
}