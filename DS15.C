//creation of tree (no.)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
  int item;
  struct node* left;
  struct node* right;
};

struct node* createnode(int value)
{
  struct node* newnode = malloc(sizeof(struct node));
  newnode->item = value;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}

struct node* insertleft(struct node* root , int value)
{
  root->left=createnode(value);
  return root->left;
}
struct node* insertright(struct node* root , int value)
{
  root->right=createnode(value);
  return root->right;
}

//traversal
void preordertraversal(struct node* root)
{
  if(root==NULL) return;

  printf("%d->",root->item);
  preordertraversal(root->left);
  preordertraversal(root->right);
}
void postordertraversal(struct node* root)
{
  if(root==NULL) return;

  postordertraversal(root->left);
  postordertraversal(root->right);
  printf("%d->",root->item);
}
void inordertraversal(struct node* root)
{
  if(root==NULL) return;

  inordertraversal(root->left);
  printf("%d->",root->item);
  inordertraversal(root->right);
}

void main()
{
//for complete binary tree

  struct node* root = createnode(1);
  insertleft(root,10);
  insertright(root,20);
  insertleft(root->left,30);

  clrscr();
  printf("\nComplete Binary Tree : \n");
  preordertraversal(root);    //calling of preorder tarversal func.
  printf("\n");
  postordertraversal(root);
  printf("\n");
  inordertraversal(root);

//for perfect binary tree
	    /*
  struct node* root = createnode(1);
  insertleft(root,10);
  insertright(root,20);
  insertleft(root->left,30);
  insertright(root->left,40);
  insertleft(root->right,50);
  insertright(root->right,60);

  clrscr();
  printf("\nperfect Binary Tree : \n");
  preordertraversal(root);    //calling of preorder tarversal func.
  printf("\n");
  postordertraversal(root);
  printf("\n");
  inordertraversal(root);     */
  getch();
}