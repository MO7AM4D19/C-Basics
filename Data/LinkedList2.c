#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void printList(struct node* head);
struct node* addListBV(struct node* head,int data);
void addListBR(struct node** head,int data);
void addListEnd(struct node* head,int data);
void addListIdx(struct node* head,int data, int Idx);
struct node* delListBV(struct node* head);
void delListEnd(struct node* head);
void delListIdx(struct node* head,int Idx);




void main()
{
    struct node * head = (struct node*)malloc(sizeof(struct node));
    head->data=19;
    struct node * first = (struct node*)malloc(sizeof(struct node));
    first->data=20;
    head->next=first;
    struct node * second = (struct node*)malloc(sizeof(struct node));
    second->data=30;
    first->next = second;
    second ->next = NULL;
    printList(head);
    delListIdx(head,1);
    printList(head);
}

void printList(struct node* head)
{
    struct node * traverse = head;
    while(traverse != NULL)
    {
        printf(" %d",traverse->data);
        traverse=traverse->next;
    }
}

struct node* addListBV(struct node* head,int data)
{
    struct node * temp =(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    return temp;
}

void addListBR(struct node** head,int data)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=*head;
    *head=temp;
}

void addListEnd(struct node* head,int data)
{
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node * traverse = head;
    while(traverse->next != NULL )
    {
        traverse=traverse->next;
    }
    traverse->next = temp;
}

void addListIdx(struct node* head,int data, int Idx)
{
    struct node * temp =(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    struct node * traverse =head;
    for(int i=0;i<Idx-1;i++)
    {
        traverse=traverse->next;
    }
    temp->next=traverse->next;
    traverse->next=temp;
}

struct node * delListBV(struct node* head)
{
    struct node * temp = head->next;
    free(head);
    return temp;
}

void delListEnd(struct node* head)
{
    struct node *traverse=head;
    while(traverse->next->next != NULL)
    {
        traverse=traverse->next;
    }
    free(traverse->next);
    traverse->next=NULL;
}

void delListIdx(struct node* head,int Idx)
{
    struct node * nodeBefore =head; 
    for(int i =0;i<Idx-1;i++)
    {
        nodeBefore=nodeBefore->next;
    }
    struct node * nodeAfter=head->next->next;
    free(nodeBefore->next);
    nodeBefore->next=nodeAfter;
}