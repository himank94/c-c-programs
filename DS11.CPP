#include<stdio.h>     //types of matrix
#include<conio.h>
void main()
{
  int arr[10][10],size,i,j,sum=0;
  clrscr();
  printf("\nenter array size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("\nenter array element arr[%d][%d]=",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
  clrscr();
  printf("\nDisplay original array element\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }  /*
  printf("\nDisplay row array element\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i==0)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndisplay two row array element\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i==0 || i==1)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndisplay column array element\n");
   for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(j==0)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }*/
  printf("\ndisplay diagonal array element\n");
   for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i==j)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      sum=sum+arr[i][j];
    }
  }
  printf("%d",sum);/*
  printf("\ndisplay identity matrix array element\n");
   for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i==j)
      {
	arr[i][j]=1;
	printf("%d\t",arr[i][j]);
      }
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndisplay scalar matrix array element\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i==j)
      {
	arr[i][j]=2;
	printf("%d\t",arr[i][j]);
      }
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndisplay upper triangular matrix array element\n");
   for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i<=j)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndispaly lower trangular matrix array element\n");
   for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(i>=j)
	printf("%d\t",arr[i][j]);
      else
      {
	arr[i][j]=0;
	printf("%d\t",arr[i][j]);
      }
    }
    printf("\n");
  }
  printf("\ndisplay null matrix array element\n");
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      arr[i][j]=0;
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }*/
  getch();
}