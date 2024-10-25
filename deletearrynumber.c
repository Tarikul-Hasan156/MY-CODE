#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int arr[x],arr1[x];
    int i;
    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=x;i>=0;i--)
    {
        arr1[i]=arr[i];
    }
    printf("%d",arr1[i]);
    return 0;
   
}