#include<stdio.h>
#include<conio.h>   //sorting
int main()
{
  int arr[100],i,j,size,p;
  printf("\nenter array size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter array element arr[%d]=",i);
    scanf("%d",&arr[i]);
  }
  printf("\ndisplay unsorted array element");
  for(i=0;i<size;i++)
  {
    printf("\n%d",arr[i]);
  }
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
	p=arr[i];
	arr[i]=arr[j];
	arr[j]=p;
      }
    }
  }
  printf("\ndisplay sorted array element");
  for(i=0;i<size;i++)
  {
    printf("\n%d",arr[i]);
  }
}