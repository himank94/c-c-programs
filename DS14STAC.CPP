#include<stdio.h>
#include<conio.h>	  //stack
int maxsize=8;
int stack[8];
int top=-1;

int isempty()
{
  if(top==-1)
    return 1;
  else
    return 0;
}

int isfull()
{
  if(top==maxsize)
    return 1;
  else
    return 0;
}

int peek()
{
  return stack[top];
}

int pop()
{
  int data;
  if(!isempty())
  {
    data = stack[top];
    top=top-1;
    return data;
  }
  else
  {
    printf("\nstack is empty or stack is underflow");
  }
  return data;
}

int push(int data)
{
  if(!isfull())
  {
    top=top+1;
    stack[top]=data;
  }
  else
  {
    printf("\nstack is full or stack is overflow");
  }
  return 0;
}

void main()
{
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);
  printf("\nelement at top of stack: %d\n",peek());
  printf("\ndispaly all stack elements: \n");
  while(!isempty())
  {
    int data=pop();
    printf("%d\n",data);
  }
  getch();
}