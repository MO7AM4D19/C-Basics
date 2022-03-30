/*****************************************************************************************************************************
Auther: Mohamed Khalid Anis 
Date: 23/3/2022
Program: This program askes the use to input an item name,price and quantity and stores it in an struct and prints it using
two functions while using char pointer to save the item name
*****************************************************************************************************************************/
/* including functions*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*strut declration*/
struct item 
{
    char * itemName;
    int quantity;
    float price;
    float amount;
};
/*functions declrations*/
void readItem(struct item * ItemRead);
void printItem(struct item * ItemPrint);

void main()
{
    struct item userItem, *ptrItem=&userItem;
    readItem(ptrItem);
    printItem(ptrItem);
}

void readItem(struct item * ItemRead)
{
    char string[20];
    printf("please enter item name: ");
    scanf(" %s",string);
    ItemRead->itemName = (char *)malloc(strlen(string)+1);
    strcpy(ItemRead->itemName,string);
    printf("please enter item quantity: ");
    scanf(" %d",&ItemRead->quantity);
    printf("please enter item price: ");
    scanf(" %f",&ItemRead->price);
    ItemRead->amount=ItemRead->price * ItemRead->quantity;
}

void printItem(struct item * ItemPrint)
{
    printf("The Item Name is: %s \n",ItemPrint->itemName);
    printf("The Item Quantity is: %d \n",ItemPrint->quantity);
    printf("The Item price is: %.3f \n",ItemPrint->price);
    printf("The total amount is: %.3f",ItemPrint->amount);
    free(ItemPrint->itemName);
}