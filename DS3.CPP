#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  char arr[100];
  int size,i;
  clrscr();
  printf("\nenter size=");
  scanf("%d",&i);
  for(i=0;i<size;i++)
  {
    printf("\nenter your name %d letter=",i);
    fflush(stdin);
    scanf("%c",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
    printf("\n%c",&arr[i]);
  }
  getch();
}