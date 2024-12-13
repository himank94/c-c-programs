#include<stdio.h>
#include<conio.h>
struct node
{
  int data;
  struct node *left , *right;
};
struct node *create()
{
  int x;
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("\nenter new node(-1 if no node) = ");
  scanf("%d",&x);
  if(x==-1)
    return 0;
  newnode->data=x;
  printf("\nenter the left node of %d = ",x);
  newnode->left=create();
  printf("\nenter the right node of %d= ",x);
  newnode->right=create();
  return newnode;
}
void inordertraversal(struct node *root)
{
  if(root==NULL)
    return;
  inordertraversal(root->left);
  printf("%d->",root->data);
  inordertraversal(root->right);
}
void main()
{
  struct node *root;
  root=0;
  root=create();
}