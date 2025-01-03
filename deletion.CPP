#include<stdio.h>
#include<conio.h>     // deletion
int main()
{
  int arr[100],size,i,pos;
  printf("\nenter array size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter array element arr[%d]=",i);
    scanf("%d",&arr[i]);
  }
  printf("\nenter the position that you want to remove=");
  scanf("%d",&pos);
  if(pos>size)
    printf("\ndeletion is not possible");
  else
  {
    for(i=pos;i<size;i++)
    {
      arr[i]=arr[i+1];
    }
    for(i=0;i<size-1;i++)
    {
      printf("\n%d",arr[i]);
    }
  }
}