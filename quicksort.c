#include<stdio.h>
#include<conio.h>
partition(a,lb,ub)
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