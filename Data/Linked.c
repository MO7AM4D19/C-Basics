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
struct node* beginNode(struct node * head,int data);
void reBeginNode(struct node **head,int data);
void delEnd(struct node * head);

void main()
{
    //creating a linked list that contains 3 nodes
    struct node * head = (struct node *) malloc(sizeof(struct node));
    head->data=30;
    head->next=NULL;
    struct node * node2=(struct node*)malloc(sizeof(struct node));
    head->next=node2;
    node2->data=47;
    struct node * node3=(struct node*)malloc(sizeof(struct node));
    node2->next=node3;
    node3->data=50;
    node3->next=NULL;
    //endNode(head,38);
    //head=beginNode(head,13);
    //reBeginNode(&head,17);
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
        int counter=0;
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

struct node* beginNode(struct node * head,int data)
{
    struct node * nHead=(struct node*)malloc(sizeof(struct node));
    nHead->data=data;
    nHead->next=head;
    head=nHead;
    return head;
}

void reBeginNode(struct node **head,int data)
{
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=*head;
    *head=temp;
}

void delEnd(struct node * head)
{
    struct node * temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}