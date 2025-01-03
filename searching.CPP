#include<stdio.h>
#include<conio.h>
int main()                            //searching
{
  int arr[100],size,i,search,p=0;
  printf("\nenter array size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter array element arr[%d]=",i);
    scanf("%d",&arr[i]);
  }
  printf("\nenter the array element you want to search=");
  scanf("%d",&search);
  for(i=0;i<size;i++)
  {
    if(arr[i]==search)
    {
      printf("\nsearch found at location %d",i);
      p=1;
    }
  }
  if(p==0)
    printf("\nsearch not found");
}