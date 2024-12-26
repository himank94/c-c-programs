#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,j,k,min;
    printf("\nenter array size= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            k=a[i];
            a[i]=a[min];
            a[min]=k;
        }
    }
    printf("\nsorted array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}