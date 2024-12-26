#include<stdio.h>
#include<conio.h>
int main()
{
    int a2[100][100],a1[100];
    int i,j,k=0;
    int size;
    printf("enter size= ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            printf("enter a2[%d][%d]=",i,j);
            scanf("%d",&a2[i][j]);
        }
    }
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size; j++)
        {
            a1[k]=a2[i][j];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("\n%d",a1[i]);
    }
}