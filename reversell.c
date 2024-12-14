#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count=0;
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;
void implement();
void reverse();
void display();
void main()
{
    int choice=0;
    while(choice!=4)
    {
        printf("\n1.implementation of linked list\n2.reverse of linked list\n3.display\n4.exit");
        printf("\nenter your choice= ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                implement();
                break;
            case 2:
                reverse();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\ninvalid choice");
        }
    }
}
void implement()
{
  struct node *newnode , *temp;
  int c;
  while(c!=0)
  {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data = ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
      head=temp=newnode;
    }
    else
    {
      temp->next=newnode;
      temp=newnode;
    }
    count++;
    printf("\ndo you want to add element(0 or 1)= ");
    scanf("%d",&c);
  }
}
void reverse()
{
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while (nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
}
void display()
{
    struct node *temp;
    temp=head;
    count=0;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\ntotal number of elements in list are %d",count);
}