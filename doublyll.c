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
struct node *head=NULL,*tail=NULL;
void implement();
void display();
void beginsert();
void last_insert();
void pos_insert();
void aftpos_insert();
void main()
{
  int choice=0;
  while(choice!=10)
  {
    printf("\n1.implementation of doublyll\n2.insert at beginning\n3.insert at last\n4.insert at the position\n5.insert after the position\n6.delete from beginning\n7.delete from last\n8.delete from the specified position\n9.display\n10.exit");
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
	    pos_insert();
	    break;
      case 5:
	    aftpos_insert();
	    break;
    //   case 6:
	//     delete_last();
	//     break;
    //   case 7:
	//     pos_delete();
	//     break;
      case 9:
	    display();
	    break;
      case 10:
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
  struct node *newnode;
  int c;
  while(c!=0)
  {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data = ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
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
void beginsert()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data you want to insert at beginning= ");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    count++;
}
void last_insert()
{
    struct node *newnode;
    if(head==0)
    {
        printf("\nlist is empty");
    }
    else
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nenter the data you want to insert at last= ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
        count++;
    }
}
void pos_insert()
{
    struct node *newnode,*temp,*temp1;
    int pos,i=1,j=1;
    if(head==0)
    {
        printf("\nlist is empty");
    }
    else
    {
        printf("\nenter the position= ");
        scanf("%d",&pos);
        if(pos>count)
        {
            printf("\ninvalid position");
        }
        else if(pos==1)
        {
            beginsert();
        }
        else
        {
            newnode=(struct node  *)malloc(sizeof(struct node));
            printf("\nenter data you want to insert at %d position= ",pos);
            scanf("%d",&newnode->data);
            temp=temp1=head;
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
            newnode->next=temp;
            temp->prev=newnode;
            newnode->prev=temp1;
            temp1->next=newnode;
            count++;
        }
    }
}
void aftpos_insert()
{
    struct node *newnode,*temp,*temp1;
    int pos,i=1,j=1;
    if(head==0)
    {
        printf("\nlist is empty");
    }
    else
    {
        printf("\nenter the position= ");
        scanf("%d",&pos);
        if(pos>count)
        {
            printf("\ninvalid position");
        }
        else if(pos==count)
        {
            last_insert();
        }
        else
        {
            newnode=(struct node  *)malloc(sizeof(struct node));
            printf("\nenter data you want to insert after %d position= ",pos);
            scanf("%d",&newnode->data);
            temp=temp1=head;
            while(i<pos)
            {
                temp=temp->next;
                i++;
            }
            while(j<pos+1)
            {
                temp1=temp1->next;
                j++;
            }
            newnode->next=temp1;
            temp1->prev=newnode;
            newnode->prev=temp;
            temp->next=newnode;
            count++;
        }
    }
}