#include<stdio.h>                          //multiplication
#include<conio.h>
void main()
{
  int a[100][100],b[100][100],c[100][100];
  int s1,s2,i,j,k;
  clrscr();
  printf("\nenter array size s1 &s2=");
  scanf("%d",&s1);
  scanf("%d",&s2);
  for(i=0;i<s1;i++)
  {
    for(j=0;j<s2;j++)
    {
      printf("\nenter array element a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<s1;i++)
  {
    for(j=0;j<s2;j++)
    {
      printf("\nenter array element b[%d][%d]=",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<s1;i++)
  {
    for(j=0;j<s2;j++)
    {
      c[i][j]=0;
      for(k=0;k<s2;k++)
      {
	c[i][j]=c[i][j]+a[i][k] * b[k][j];
      }
    }
  }
  for(i=0;i<s1;i++)
  {
    for(j=0;j<s2;j++)
    {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  getch();
}