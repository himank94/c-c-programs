//linear search
#include<stdio.h>
#include<conio.h>
int linearsearch(int a[100],int search,int size,int i,int t)
{
  for(i=0;i<size;i++)
  {
    if(search==a[i])
    {
      printf("\nsearch found at location %d",i);
      t=1;
    }
    continue;
  }
  if(t==0)
    printf("\nsearch not found");
  return 0;
}
void main()
{
  int a[100],size,i,search,t=0;
  clrscr();
  printf("\nenter size of array= ");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter a[%d]= ",i);
    scanf("%d",&a[i]);
  }
  printf("\nenter the search element= ");
  scanf("%d",&search);
  clrscr();
  linearsearch(a,search,size,i,t);
  getch();
}