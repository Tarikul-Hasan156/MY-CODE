#include<stdio.h>
int main ()
{
    int x;
    printf("Enter the size of arry : ");
    scanf("%d",&x);
    int arr1[x],arr2[x],i,j;
    for (i=0;i<x;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (i=x-1;j=0;i>=0;i--;j++)
    {
        arr2[j]=arr1[i];

    }
    for (i=0;i<x;i++)
    {
        printf("%d",arr2[i]);

    }
    return 0;
}
