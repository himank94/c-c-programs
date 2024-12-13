#include<stdio.h>
#include<conio.h>  //addition by func.
void matrixsum(int a[10][10],int b[10][10]);
void main()
{
  int a[10][10],b[10][10],size,i,j;
  clrscr();
  printf("\nenter size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("\nenter array element a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("\nenter array element b[%d][%d]=",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  matrixsum(a,b);
  getch();
}
void matrixsum(int a[10][10],int b[10][10])
{
  int sum[10][10],size,i,j;
  printf("\nenter size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d\t",sum[i][j]);
    }
    printf("\n");
  }
}