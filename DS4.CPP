#include<stdio.h>
#include<conio.h>          //concatination
void main()
{
  int arr1[100],arr2[100],arr3[100];
  int n1,n2,i,a=0;
  clrscr();
  printf("\nenter array size n1&n2=");
  scanf("%d %d",&n1,&n2);
  for(i=0;i<n1;i++)
  {
    printf("\nenter array element arr1[%d]=",i);
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<n2;i++)
  {
    printf("\nenter array element arr2[%d]",i);
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<n1;i++)
  {
    arr3[a]=arr1[i];
    a++;
  }
  for(i=0;i<n2;i++)
  {
    arr3[a]=arr2[i];
    a++;
  }
  for(i=0;i<a;i++)
  {
    printf("\n%d",arr3[i]);
  }
  getch();
}