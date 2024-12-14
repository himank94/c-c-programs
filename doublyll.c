#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count=0;
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head=NULL;
void implement();
void display();
void main()
{
  int choice=0;
  while(choice!=9)
  {
    printf("\n1.implementation of doublyll\n2.insert at beginning\n3.insert at last\n4.insert after the position that you want\n5.delete from beginning\n6.delete from last\n7.delete from the specified position\n8.display\n9.exit");
    printf("\nenter your choice= ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        implement();
	    break;
    //   case 2:
	//     beginsert();
	//     break;
    //   case 3:
	//     last_insert();
	//     break;
    //   case 4:
	//     user_insert();
	//     break;
    //   case 5:
	//     delete_begin();
	//     break;
    //   case 6:
	//     delete_last();
	//     break;
    //   case 7:
	//     pos_delete();
	//     break;
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
  struct node *newnode , *temp , *temp1;
  int c;
  while(c!=0)
  {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data = ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=temp1=newnode;
    }
    else
    {
        if(head==newnode)
        {
            temp->prev=NULL;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            temp->prev=temp1;
            temp1=temp;
        }
    }
    count++;
    printf("\ndo you want to add element(0 or 1)= ");
    scanf("%d",&c);
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