/************************************************************************************************ 
Auther: Mohamed Khalid Anis
Date: 1-4-2022
Program: Insert an item (Entered by the user) before a given index 
(Also Entered by the user) in array data structure.
Assume that the maximum size of array is 10. and it already contains 9 items.
************************************************************************************************/

#include <stdio.h>  // include the standard input output header file
#define MAX 10     // define the maximum size of array
void main()
{
    // declare the variables
    int arr[MAX]={23,53,18,43,93,16,38,10,36}; // define the array
    int num; // define the variable to store the number to be inserted
    int index; // define the variable to store the index to be inserted before
    //take the input from the user
    printf("please enter the value that you want to insert: "); 
    scanf(" %d",&num); // store the value entered by the user
    printf("please enter the index to be inserted before: "); 
    scanf(" %d",&index); // store the index entered by the user
    //print the array before inserting the value
    printf("array before insertion:\n");
    for(int i=0;i<MAX;i++) // loop to print the array
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    //loop to shift the array elements to the right
    for(int i=MAX-1;i>=index-1;i--)
    {
        arr[i+1]=arr[i];
    }
    //insert the value before the given index
    arr[index-1]=num;
    printf("array members after insertion:\n");
    //loop to print the array after inserting the value
    for(int i=0;i<MAX;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}

