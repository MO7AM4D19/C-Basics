#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node * head);
void count(struct node * head);
void endNode(struct node * head,int data);

void main()
{
    //creating a linked list that contains 3 nodes
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data=30;
    head->next=NULL;
    struct node * node2=(struct node*)malloc(sizeof(struct node));
    node2->data=47;
    head->next=node2;
    struct node * node3=(struct node*)malloc(sizeof(struct node));
    node3->data=50;
    node3->next=NULL;
    //endNode(head,38);
    print(head);
    count(head);
}

void print(struct node * head)
{
    if(head==NULL)
    {
        printf("the list is already empty");
    }
    else
    {
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            printf("%d \n",ptr->data);
            ptr=ptr->next;
        }
    }
}

void count(struct node * head)
{
    if(head==NULL)
    {
        printf("the list is already empty");
    }
    else
    {
        struct node * ptr=head;
        int counter=1;
        while (ptr!=NULL)
        {
            counter++;
            ptr=ptr->next;
        }
        printf("%d",counter);
    }
}

void endNode(struct node * head,int data)
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=(struct node*)malloc(sizeof(struct node));
    ptr->next->data=data;
    ptr->next->next=NULL;
}
