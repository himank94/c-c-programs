//WAP to traverse array element
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  char arr[100];
  int i,size;
  clrscr();
  printf("enter array size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter array element arr[%d]=",i);
    fflush(stdin);
    scanf("%c",&arr[i]);
  }
  printf("\n display array element:");
  for(i=0;i<size;i++)
  {
    printf("\n%c",arr[i]);
  }
  printf("\n first element=%c",arr[0]);
  printf("\nlast element=%c",arr[size-1]);
  printf("\nmiddle element=%c",arr[size/2]);
  getch();
}