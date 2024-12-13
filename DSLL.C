#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void begin_delete();
void last_delete();
void display();

void main()
{
  int choice=0;
  while(choice!=6)
  {
    printf("\n1.insert in beginning\n2.insert at last\n3.delete from beginning\n4.delete from last\n5.show\n6.exit");
    printf("\nenter your choice= ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
	beginsert();
	break;
      case 2:
	lastinsert();
	break;
      case 3:
	begin_delete();
	break;
      case 4:
	last_delete();
	break;
      case 5:
	display();
	break;
      case 6:
	exit(0);
	break;
      default:
	printf("\nplease enter valid choice");
    }
  }
  getch();
}
void beginsert()
{
  struct node *ptr;
  int item;
  head=0;
  ptr=(struct node *)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
    printf("\noverflow");
  }
  else
  {
    printf("\nenter data=");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
  }
}
void lastinsert()
{
  struct node *ptr,*temp;
  int item;
  head=0;
  ptr=(struct node *)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
    printf("\noverflow");
  }
  else
  {
    printf("\nenter data= ");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
      ptr->next=NULL;
      head=ptr;
    }
    else
    {
      temp=head;
      while(temp->next!=NULL)
      {
	temp=temp->next;
      }
      temp->next=ptr;
      ptr->next=NULL;
    }
  }
}
void begin_delete()
{
  struct node *ptr;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    ptr=head;
    head=ptr->next;
    free(ptr);
  }
}
void last_delete()
{
  struct node *ptr,*temp;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else if(head->next==NULL)
  {
    head=NULL;
    free(head);
  }
  else
  {
    temp=head;
    while(temp->next!=NULL)
    {
      ptr=temp;
      temp=temp->next;
    }
    ptr->next=NULL;
    free(ptr);
  }
}
void display()
{
  struct node *ptr;
  if(ptr==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    while(ptr!=NULL)
    {
      printf("\n%d",ptr->data);
      ptr=ptr->next;
    }
  }
}
