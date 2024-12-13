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
void beginsert();
void last_insert();
void user_insert();
void delete_begin();
void delete_last();
void pos_delete();
void display();
void main()
{
  int choice=0;
  while(choice!=9)
  {
    printf("\n1.implementation of ll\n2.insert at beginning\n3.insert at last\n4.insert after the position that you want\n5.delete from beginning\n6.delete from last\n7.delete from the specified position\n8.display\n9.exit");
    printf("\nenter your choice= ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      implement();
	    break;
      case 2:
	    beginsert();
	    break;
      case 3:
	    last_insert();
	    break;
      case 4:
	    user_insert();
	    break;
      case 5:
	    delete_begin();
	    break;
      case 6:
	    delete_last();
	    break;
      case 7:
	    pos_delete();
	    break;
      case 8:
	    display();
	    break;
      case 9:
	    exit(0);
	    break;
      default:
	    printf("\ninvalid choice , please enter valid choice");
    }
  }
  getch();
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
void beginsert()
{
  struct node *newnode ;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nenter the data you want to insert at beginning of the list= ");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
  count++;
}
void last_insert()
{
  struct node *newnode , *temp;
  temp=head;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data you want to insert at end of the list= ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newnode;
    count++;
  }
}
void user_insert()
{
  struct node *newnode,*temp;
  int pos,i=1;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nenter the position= ");
  scanf("%d",&pos);
  if(pos>count)
  {
    printf("\ninvalid position");
  }
  else
  {
    temp=head;
    while(i<pos)
    {
      temp=temp->next;
      i++;
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data you want to insert after %d position= ",pos);
    scanf("%d",&newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    count++;
  }
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
void delete_begin()
{
  struct node *temp;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    temp=head;
    head=head->next;
    free(temp);
    count--;
  }
}
void delete_last()
{
  struct node *temp,*temp1;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    temp=head;
    while(temp->next!=0)
    {
      temp1=temp;
      temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    count--;
  }
}
void pos_delete()
{
  int pos,i=1,j=1;
  struct node *temp,*temp1;
  if(head==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    temp=head;
    temp1=head;
    printf("\nenter the position of node you want to delete= ");
    scanf("%d",&pos);
    if(i>count)
      printf("\nnumber of elements are less in the list");
    else
    {
      if(pos==1)
	delete_begin();
      else
      {
	while(i<pos)
	{
	  temp=temp->next;
	  i++;
	}
	while(j<pos-1)
	{
	  temp1=temp1->next;
	  j++;
	}
	temp1->next=temp->next;
	free(temp);
	count--;
      }
    }
  }
}