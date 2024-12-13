#include<stdio.h>
#include<conio.h>
void main()
{                           // float traversal
  float arr[100];
  int i,size;
  clrscr();
  printf("enter the size of array=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter float no. =");
    scanf("%f",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
    printf("\n%.1f",arr[i]);
  }
  printf("\nfirst element is %f",arr[0]);
  getch();
}
