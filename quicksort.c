#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub)
{
    int k;
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            k=a[start];
            a[start]=a[end];
            a[end]=k;
        }
    }
    k=a[lb];
    a[lb]=a[end];
    a[end]=k;
    return end;
}
int quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc= partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
void main()
{
    int lb,ub,a[100],n,i;
    printf("enter array size= ");
    scanf("%d",&n);
    lb=0;
    ub=n-1;
    for(i=0;i<n;i++)
    {
        printf("\nenter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    quicksort(a,lb,ub);
    printf("\nsorted array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}