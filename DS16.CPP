//binary search
#include<stdio.h>
#include<conio.h>
int binarysearch(int a[],int low , int high , int search)
{
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    if(search==a[mid])
    {
      return mid;
    }
    else if(search>a[mid])
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}
void main()
{
  int a[50],size,i,j,search,t;
  char s[50];
  clrscr();
  printf("\nenter array size= ");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter a[%d]= ",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(a[i] > a[j])
      {
	printf("\nbinary search can not be done as array is not in sorted way");
	break;
      }
      else
	continue;
    }
    break;
  }
  printf("\nif you still want to do binary search so just type 'sort' ");
  scanf("%s",&s);
  printf("%s",s);
  if(s=="sort")
  {
    for(i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
      {
	if(a[i] > a[j])
	{
	  t=a[i];
	  a[i]=a[j];
	  a[j]=t;
	}
      }
    }
    printf("\nenter search element= ");
    scanf("%d",&search);
    int result=binarysearch(a,0,size-1,search);
    if(result==-1)
    {
      printf("\nsearch not found");
    }
    else
    {
      printf("\nsearch found at location %d",result);
    }
  }
  else
    printf("\nyou don't want to sort the array");
  getch();
}