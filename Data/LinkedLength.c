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
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    struct node * node2=(struct node*)malloc(sizeof(struct node));
    head->next=node2;
    node2->data=20;
    struct node * node3=(struct node*)malloc(sizeof(struct node));
    node2->next=node3;
    node3->data=30;
    node3->next=NULL;
    struct node * node4=(struct node*)malloc(sizeof(struct node));
    node3->next=node4;
    node4->data=40;
    node4->next=NULL;
    printf("Linked Listd size is %d",count(head));
}
int count(struct node * head)
{
    if(head==NULL)
    {
        printf("the list is already empty");
    }
    else
    {
        struct node * ptr=head;
        int counter=0;
        while (ptr!=NULL)
        {
            counter++;
            ptr=ptr->next;
        }
        return counter;
    }
}