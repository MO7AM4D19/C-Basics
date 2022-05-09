/**************************************************************************************************************************
Date: 10/5/2022
Auther: Mohamed Khalid Anis
Program: This program initializes a linked list with a certain values 
              it contains a function that returns the number of elements in the list
**************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int count(struct node * head);
void main()
{
    /* setting up nodes */
    /* Node1 */
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    /* Node2 */
    struct node * node2=(struct node*)malloc(sizeof(struct node));
    head->next=node2;
    node2->data=20;
    /* Node3 */
    struct node * node3=(struct node*)malloc(sizeof(struct node));
    node2->next=node3;
    node3->data=30;
    node3->next=NULL;
    /* Node 4 */
    struct node * node4=(struct node*)malloc(sizeof(struct node));
    node3->next=node4;
    node4->data=40;
    node4->next=NULL;
    /* calling count function */
    printf("Linked Listd size is %d",count(head));
}

/* count is a function that takes the a pointer to the head of the linked list and returns the length of it */
int count(struct node * head)
{
    if(head==NULL)
    {
        /* checking if the linked list is already empty */
        printf("the list is already empty");
    }
    else
    {
        struct node * ptr=head;                     /*using temp pointer so the head pointer value doesn't change*/       
        int counter=0;                              /* initializing the counter with zero */ 
        for(;ptr!=NULL;counter++,ptr=ptr->next);    /* for loop to count the number of nodes */
        return counter;
    }
}