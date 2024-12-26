#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n,t;
    printf("\nenter size of the array= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    printf("\nsorted array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}