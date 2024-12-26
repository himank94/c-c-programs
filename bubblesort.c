#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,j,flag,n,k;
    printf("enter the size of the array= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("\nsorted array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
